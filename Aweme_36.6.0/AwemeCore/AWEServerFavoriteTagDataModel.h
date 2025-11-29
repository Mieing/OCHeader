@class NSString, NSNumber;

@interface AWEServerFavoriteTagDataModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSNumber *count;
@property (retain, nonatomic) NSNumber *lastUpdateTime;
@property (nonatomic) BOOL isAhead;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
