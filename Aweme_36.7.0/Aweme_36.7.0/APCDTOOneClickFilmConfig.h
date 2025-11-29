@class NSArray, NSString;

@interface APCDTOOneClickFilmConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *musicIdList;
@property (copy, nonatomic) NSString *mvSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
