@class UILabel, NSString, DVEVideoOverTimeCoverViewConfig;

@interface DVEVideoOverTimeWholeTrackCoverView : UIView <DVEVideoOverTimeCoverViewProtocol>

@property (retain, nonatomic) DVEVideoOverTimeCoverViewConfig *config;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)setupUI;

@end
