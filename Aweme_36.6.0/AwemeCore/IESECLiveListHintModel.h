@class IESECLiveGoodsListApplyResp, NSString;

@interface IESECLiveListHintModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECLiveGoodsListApplyResp *applyResp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)applyRespJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
