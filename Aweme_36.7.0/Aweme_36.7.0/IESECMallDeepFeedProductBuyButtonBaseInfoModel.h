@class NSString;

@interface IESECMallDeepFeedProductBuyButtonBaseInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *link;
@property (copy, nonatomic) NSString *buttonType;
@property (copy, nonatomic) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
