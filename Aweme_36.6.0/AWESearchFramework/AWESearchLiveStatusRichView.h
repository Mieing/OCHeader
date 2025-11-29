@class AWESearchLiveAssistLabel, NSString, AWESearchLiveOnlyStatusView, AWEAwemeModel, AWESearchLiveInfoView;

@interface AWESearchLiveStatusRichView : UIView <AWESearchLiveOnlyStatusViewDelegate, AWESearchLiveStatusViewProtocol>

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWESearchLiveOnlyStatusView *statusView;
@property (retain, nonatomic) AWESearchLiveInfoView *infoView;
@property (retain, nonatomic) AWESearchLiveAssistLabel *assistView;
@property (retain, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configModel:(id)a0;
- (void)configModel:(id)a0 withAssistText:(id)a1;
- (void)tagImageHasDownload;
- (void)configInfoViewWithModel:(id)a0;
- (void)configInfoViewWithTagModel:(id)a0;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateUI;

@end
