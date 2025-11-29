@class NSArray, NSDictionary, NSString;

@interface IESECLiveGoodsCardAtmosphereItemModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long type;
@property (nonatomic) long long displayType;
@property (retain, nonatomic) NSArray *content;
@property (retain, nonatomic) NSDictionary *eventParams;
@property (nonatomic) long long duration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contentJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
