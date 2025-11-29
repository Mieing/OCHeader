@class NSString, IESECLiveConfigCountDownModel;

@interface IESECLiveGoodsProgressBarModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) double progressPercent;
@property (retain, nonatomic) IESECLiveConfigCountDownModel *countDown;
@property (copy, nonatomic) NSString *leftText;
@property (copy, nonatomic) NSString *rightText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
