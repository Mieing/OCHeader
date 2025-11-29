@class MultiTalkScreenSharingAudienceContentView, MultiTalkScreenSharingAudienceBackgroundView, NSString, MMContentScrollView;
@protocol MultiTalkScreenSharingAudienceViewDelegate;

@interface MultiTalkScreenSharingAudienceView : UIView <FullScreenGestureDelegate, MMContentScrollViewDelegate>

@property (retain, nonatomic) MultiTalkScreenSharingAudienceBackgroundView *backgroundView;
@property (retain, nonatomic) MMContentScrollView *scrollView;
@property (retain, nonatomic) MultiTalkScreenSharingAudienceContentView *contentView;
@property (nonatomic) long long contentInterfaceOrientation;
@property (nonatomic) double contentWHRatio;
@property (nonatomic) BOOL isUnEnabled;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentUnabledFrame;
@property (weak, nonatomic) id<MultiTalkScreenSharingAudienceViewDelegate> delegate;
@property (nonatomic) BOOL isOperationViewsHidden;
@property (nonatomic) BOOL isLandscapeSupport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)transformFromCellFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withAnimation:(BOOL)a1 completion:(id /* block */)a2;
- (void)transformToCellFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withAnimation:(BOOL)a1 completion:(id /* block */)a2;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutWithContentInterfaceOrientation:(long long)a0 width:(double)a1 height:(double)a2;
- (void)layoutSubviews;
- (void)updateRender:(id)a0;
- (void)updateMember:(id)a0;
- (void)resetScale;
- (void)updateTalkingMembersWithUsersName:(id)a0;
- (void)contentScrollViewDidSingleTap:(id)a0;
- (void)contentScrollViewDidDoubleTap:(id)a0;
- (BOOL)contentScrollView:(id)a0 shouldIgnoreDoubleTapWithGestureRecoginzer:(id)a1;
- (void).cxx_destruct;

@end
