@class IESECBackgroundDescribeInfo, NSString, NSArray, IESECTextWithIconElement;

@interface IESECBottomButtonElement : IESECBasicElement

@property (retain, nonatomic) IESECBackgroundDescribeInfo *background;
@property (retain, nonatomic) IESECTextWithIconElement *mainTitle;
@property (retain, nonatomic) IESECTextWithIconElement *subTitle;
@property (nonatomic) double weight;
@property (nonatomic) BOOL displayAsCountDown;
@property (copy, nonatomic) NSString *countDownTemplate;
@property (copy, nonatomic) NSArray *otherStates;
@property (copy, nonatomic) NSString *clickMaskColor;
@property (nonatomic) long long intervalTime;

+ (id)otherStatesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
