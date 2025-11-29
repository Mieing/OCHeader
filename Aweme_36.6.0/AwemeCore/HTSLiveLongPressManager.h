@class UIControl, HTSEventContext, UICollectionView, NSString, IESLiveComponentContext, NSIndexPath, IESLiveDislikeInfoBox;
@protocol IESLiveDislikeServiceDelegate, IESLiveDislikeApiDispatcher;

@interface HTSLiveLongPressManager : NSObject <IESLiveDislikeService>

@property (weak, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) UIControl *dislikeMaskView;
@property (retain, nonatomic) NSIndexPath *dislikeIndexPath;
@property (retain, nonatomic) id<IESLiveDislikeApiDispatcher> dislikeApi;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) IESLiveDislikeInfoBox *dislikeCellInfo;
@property (retain, nonatomic) HTSEventContext *roomTrackContext;
@property (weak, nonatomic) id<IESLiveDislikeServiceDelegate> delegate;
@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSString *eventModule;
@property (retain, nonatomic) NSString *sourceModule;
@property (retain, nonatomic) NSString *actionType;
@property (retain, nonatomic) NSString *requestPageForDislike;
@property (retain, nonatomic) NSString *eventPageForDislike;
@property (retain, nonatomic) NSString *enterMethod;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cellLongPress:(id)a0;
- (id)enterPreviewTime;
- (void)dislikeAction;
- (void)unfollowAction;
- (void)hiddenMaskView;
- (id)initWithCollectionView:(id)a0 longPressEnabled:(BOOL)a1;
- (void)showDislikeViewForCell:(id)a0 atIndexPath:(id)a1;
- (void)showDislikeTipViewAtFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)createDouyinMenuItem;
- (void)trackEventForLongPress;
- (BOOL)isFromFollowOrCity;
- (id)videoIdForCurrentRoom;
- (void)deleteRoom:(id)a0 indexPath:(id)a1;
- (void)handleDislkieRoom:(id)a0 indexPath:(id)a1 paramDict:(id)a2;
- (BOOL)networkingCheck;
- (id)isCacheBubble;
- (id)p_addAdTrackWith:(id)a0;
- (void)setupTrackContext:(id)a0;
- (void)setupComponentContext:(id)a0;
- (void).cxx_destruct;
- (id)initWithCollectionView:(id)a0;

@end
