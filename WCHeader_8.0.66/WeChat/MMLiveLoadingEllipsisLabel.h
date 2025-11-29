@class NSString, MMTimer;

@interface MMLiveLoadingEllipsisLabel : UILabel

@property (retain, nonatomic) NSString *internalText;
@property (retain, nonatomic) MMTimer *ellipsisRotationTimer;
@property (nonatomic) unsigned long long ellipsisDotCount;

- (id)text;
- (void)setText:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)didMoveToSuperview;
- (void)resetEllipisRotationTimer;
- (void)ellipsisRotationTimerTick;
- (void).cxx_destruct;

@end
