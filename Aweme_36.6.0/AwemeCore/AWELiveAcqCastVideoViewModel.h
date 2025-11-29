@class NSString, NSDictionary, UIView, NSNumber, AWEUserModel;
@protocol AWELiveAcqCastVideoViewModelDelegate;

@interface AWELiveAcqCastVideoViewModel : NSObject <AWELiveAcqCastVideoViewModelProtocol>

@property (weak, nonatomic) id<AWELiveAcqCastVideoViewModelDelegate> delegate;
@property (nonatomic) long long bizType;
@property (nonatomic) long long panelType;
@property (nonatomic) long long tabType;
@property (nonatomic) long long feedType;
@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *challengeID;
@property (retain, nonatomic) NSString *mixID;
@property (retain, nonatomic) NSString *searchKeyword;
@property (nonatomic) BOOL isCasting;
@property (weak, nonatomic) UIView *currentUserPannel;
@property (nonatomic) BOOL isHideEndImageView;
@property (nonatomic) BOOL searchEnabled;
@property (nonatomic) BOOL liveStreamEnabled;
@property (readonly, nonatomic) BOOL searchUserEnabled;
@property (nonatomic) BOOL searchLiveStreamEnabled;
@property (nonatomic) BOOL richAwemeEnabled;
@property (copy, nonatomic) NSString *recommendPlayButtonTitle;
@property (copy, nonatomic) id /* block */ preferredContentSizeWillChange;
@property (copy, nonatomic) NSDictionary *commonTrackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didClickClose;
- (void)didSelectVideo:(long long)a0 dataController:(id)a1 currentID:(id)a2 targetFeedID:(id)a3 infoDict:(id)a4;
- (void)didClickAvatar:(id)a0;
- (void)didClickRecommendBtn;
- (void)didClickQuit;
- (id)createTableView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)createCollectionView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collectionViewLayout:(id)a1;
- (void)didSelectTab:(long long)a0 byUser:(id)a1;
- (void)didSelectMix:(id)a0;
- (void).cxx_destruct;

@end
