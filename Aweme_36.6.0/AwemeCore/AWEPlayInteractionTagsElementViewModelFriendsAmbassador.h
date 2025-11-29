@class NSArray, NSMutableArray, NSString;
@protocol AWEPlayInteractionTagsElementViewModelAmbassadorDelegate;

@interface AWEPlayInteractionTagsElementViewModelFriendsAmbassador : AFDAmbassador <AWEPlayInteractionTagsElementViewModelAmbassadorProtocol>

@property (retain, nonatomic) NSArray *friendsVideoArray;
@property (retain, nonatomic) NSMutableArray *URLModels;
@property (nonatomic) BOOL loadmoreHasMore;
@property (weak, nonatomic) id<AWEPlayInteractionTagsElementViewModelAmbassadorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)referString;
- (void)didTapRelationLabel:(id)a0;
- (void)showLikedUserPage;
- (id)model;
- (void).cxx_destruct;

@end
