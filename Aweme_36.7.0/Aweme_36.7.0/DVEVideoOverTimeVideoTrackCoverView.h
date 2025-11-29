@class NSString, UILabel, UIView, DVEVideoOverTimeCoverViewConfig;

@interface DVEVideoOverTimeVideoTrackCoverView : UIView <DVEVideoOverTimeCoverViewProtocol>

@property (retain, nonatomic) DVEVideoOverTimeCoverViewConfig *config;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIView *tipsContainerView;
@property (retain, nonatomic) UIView *coverView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)setupUI;

@end
