@class NSDictionary, NSString;

@interface AWEECPhotoSearchLynxPreloadCardConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long renderType;
@property (nonatomic) long long dataType;
@property (copy, nonatomic) NSDictionary *renderModel;
@property (copy, nonatomic) NSString *cardName;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *rawData;
@property (copy, nonatomic) NSString *cardType;
@property (nonatomic) BOOL isDouble;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
