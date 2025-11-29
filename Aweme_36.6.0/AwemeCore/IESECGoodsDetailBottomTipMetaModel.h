@class NSString;

@interface IESECGoodsDetailBottomTipMetaModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL displayAsCountDown;
@property (copy, nonatomic) NSString *countDownTemplate;
@property (copy, nonatomic) NSString *tipURL;
@property (copy, nonatomic) NSString *trackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
