@class NSMutableDictionary, MMFinderLiveConnectMicUsersInfo;

@interface MMFinderLiveReplayCompactMicUserInfoView : UIView

@property (retain, nonatomic) MMFinderLiveConnectMicUsersInfo *allMicUsersInfo;
@property (retain, nonatomic) NSMutableDictionary *userViews;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)showWithConnectMicUsersInfo:(id)a0;
- (void)clearAndHide;
- (void)layoutSubviews;
- (void)updateSubviewsWithMicUserInfo:(id)a0;
- (void).cxx_destruct;

@end
