@class NSNumber, NSString;

@interface ACCQuickFlashFavoriteModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL collectStatus;
@property (nonatomic) long long collectStatusOnAir;
@property (retain, nonatomic) NSNumber *statusCode;
@property (retain, nonatomic) NSString *statusMsg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
