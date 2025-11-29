@class NSString;

@interface MFBackupBtn : MFBannerBtn <MFBanner> {
    unsigned long long _notifyCode;
    unsigned long long _currentSessionCount;
    unsigned long long _totalSessionCount;
    NSString *_lastImageName;
    NSString *_speedString;
    NSString *_leftTimeString;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupFlowTextView;
- (void)setupImage;
- (void)setNotifyCode:(unsigned long long)a0;
- (void)setCurrentSessionCount:(unsigned long long)a0 totalSessionCount:(unsigned long long)a1;
- (void)setSpeed:(float)a0;
- (void)setLeftTime:(id)a0;
- (void).cxx_destruct;

@end
