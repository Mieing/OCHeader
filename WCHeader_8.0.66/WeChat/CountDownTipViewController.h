@class NSString, CADisplayLink;

@interface CountDownTipViewController : MMTipsViewController {
    CADisplayLink *m_timer;
    unsigned int m_uiCurrentCount;
}

@property (retain, nonatomic) NSString *m_nsTipViewMessage;
@property (nonatomic) unsigned int m_uiCountDown;
@property (retain, nonatomic) id m_userData;

- (void)dealloc;
- (void)countDownTip;
- (void)showWithAnimated:(int)a0;
- (void).cxx_destruct;

@end
