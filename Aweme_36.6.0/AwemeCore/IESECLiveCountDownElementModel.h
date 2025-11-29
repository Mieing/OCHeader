@class NSString, IESECLiveConfigCountDownModel, NSArray;

@interface IESECLiveCountDownElementModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECLiveConfigCountDownModel *countDown;
@property (retain, nonatomic) NSString *countDownColor;
@property (nonatomic) double countDownTextSize;
@property (retain, nonatomic) NSArray *countDownFinishContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)countDownFinishContentJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
