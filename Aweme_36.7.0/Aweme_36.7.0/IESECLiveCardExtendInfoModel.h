@class NSNumber, NSArray, NSString;

@interface IESECLiveCardExtendInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *delay;
@property (retain, nonatomic) NSArray *content;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contentJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
