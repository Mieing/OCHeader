@class CJPayTimer, NSString;

@interface CJPayStyleTimerButton : CJPayStyleButton <CJPayTimerProtocol>

@property (retain, nonatomic) CJPayTimer *timer;
@property (copy, nonatomic) NSString *originalTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)currentCountChangeTo:(int)a0;
- (void).cxx_destruct;
- (void)startTimer:(int)a0;

@end
