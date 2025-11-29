@class NSString, AWEUserModel;
@protocol AWEProfileFollowGuideMaskViewDelegate;

@interface AWEProfileFollowGuideMaskView : AWEUserRecommendBaseCellView <AWEUserMessage>

@property (retain, nonatomic) AWEUserModel *user;
@property (nonatomic) BOOL isShowing;
@property (weak, nonatomic) id<AWEProfileFollowGuideMaskViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishSetRemarkWithUser:(id)a0;
- (void)p_configUI;
- (void)displayWithUser:(id)a0;
- (void)p_followBtnClicked;
- (void)p_updateActionButtonStates;
- (void)dismiss;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 layout:(id)a1;
- (void)dealloc;

@end
