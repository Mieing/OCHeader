@class NSString, MMUILabel;

@interface MMFinderLivePaymentTipsBubble : UIView

@property (retain, nonatomic) MMUILabel *tipLabel;
@property (retain, nonatomic) NSString *tips;
@property (nonatomic) unsigned int duration;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (readonly, nonatomic) BOOL isShow;

- (id)initWithTips:(id)a0 duration:(unsigned int)a1;
- (void)initUI;
- (void)showWithAnimated:(BOOL)a0;
- (void)dismissWithAnimated:(BOOL)a0;
- (void)layoutSubviews;
- (void)layoutUI;
- (void).cxx_destruct;

@end
