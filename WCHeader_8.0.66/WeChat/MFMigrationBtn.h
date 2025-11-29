@class NSString;

@interface MFMigrationBtn : MFBannerBtn <MFBanner> {
    unsigned long long _notifyCode;
    unsigned long long _currentSessionCount;
    unsigned long long _totalSessionCount;
    NSString *_lastImageName;
    NSString *_speedString;
    unsigned long long m_currentRecvSize;
    unsigned long long m_totalSize;
}

@property (retain, nonatomic) NSString *leftTimeString;
@property (nonatomic) BOOL isMigrationOptEnable;
@property (nonatomic) BOOL isShowImportTips;
@property (copy, nonatomic) id /* block */ onCloseIconClick;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onArrowImageClick:(id)a0;
- (void)showImportTipsWithCloseCallback:(id /* block */)a0;
- (void)hideImportTips;
- (void)setupFlowTextView;
- (void)setupImage;
- (void)setNotifyCode:(unsigned long long)a0;
- (void)setCurrentSessionCount:(unsigned long long)a0 totalSessionCount:(unsigned long long)a1;
- (void)setCurrentReceiveSize:(unsigned long long)a0 totalSize:(unsigned long long)a1;
- (void)setSpeed:(float)a0;
- (void)setSpeed:(float)a0 leftTime:(unsigned int)a1 sizeProgress:(float)a2;
- (void).cxx_destruct;

@end
