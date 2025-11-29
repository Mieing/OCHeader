@class HTSEventContext, NSString, UILabel, IESLiveAudienceLinkmicPreApplyAnchorAcceptViewModel, UITableView;
@protocol IESLiveAudienceLinkmicPreApplyAnchorAcceptViewDataSource, IESLiveAudienceLinkmicPreApplyAnchorAcceptViewDelegate, IESLiveCompoundSubscription;

@interface IESLiveAudienceLinkmicPreApplyAnchorAcceptView : UIView <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) IESLiveAudienceLinkmicPreApplyAnchorAcceptViewModel *viewModel;
@property (weak, nonatomic) id<IESLiveAudienceLinkmicPreApplyAnchorAcceptViewDelegate> delegate;
@property (weak, nonatomic) id<IESLiveAudienceLinkmicPreApplyAnchorAcceptViewDataSource> dataSource;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UITableView *audienceApplyTableView;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)showUserPreView:(id)a0 trackerLabel:(id)a1;
- (id)p_constructWaitingUserFrom:(id)a0 offset:(long long)a1;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)setupObservers;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1;

@end
