@class NSNumber, AWEKefuGuideEffectModel, AWEKefuGuideBubbleModel;

@interface AWEKefuGuideActionModel : AWEBaseBizConfigModel

@property (retain, nonatomic) NSNumber *positionX;
@property (retain, nonatomic) NSNumber *positionY;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } position;
@property (retain, nonatomic) NSNumber *showTime;
@property (retain, nonatomic) AWEKefuGuideEffectModel *effect;
@property (retain, nonatomic) AWEKefuGuideBubbleModel *bubble;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isValidWithError:(id *)a0;

@end
