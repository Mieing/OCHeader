@class NSMutableDictionary, NSString, UIView, NSMutableArray;
@protocol IESLivePKModel;

@interface IESLivePKLocalLayout : NSObject <IESLIvePKAudienceLocalLayoutAction, IESLiveInteractiveLocalLayout, IESLiveRevenueInteractSingleViewLocalLayout>

@property (retain, nonatomic) id<IESLivePKModel> pkmodel;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frameOfFullContaienr;
@property (weak, nonatomic) UIView *oppositeRtcView;
@property (weak, nonatomic) UIView *hostRtcView;
@property (nonatomic) BOOL isAnchor;
@property (nonatomic) BOOL canUpdateWithGuest;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } hostAnchorFrame;
@property (retain, nonatomic) NSMutableArray *renderInfos;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalPreviewFrame;
@property (retain, nonatomic) NSMutableDictionary *anchorViewFrames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIView *sessionViewContainer;
@property (retain, nonatomic) UIView *optionViewContainer;

- (void)didSetAttachingDIContext;
- (id)initWithDIContext:(id)a0;
- (void)sendEffectRenderInfo;
- (void)setCameraCornerHidden:(BOOL)a0;
- (void)onNewSessionCreated:(id)a0 local:(BOOL)a1;
- (void)restoreLayoutIncludePreview:(BOOL)a0;
- (void)updateSingleViewLayoutIfNeeded:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })ratioRectByFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })updateEffectRenderInfoRatio:(id)a0 ratio:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)renderInfoByRectRatio:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 renderKey:(id)a1;
- (void)cleanRTCSessionView;
- (BOOL)singleViewOptEnabled;
- (void)layoutHostSession:(id)a0;
- (void)updateLayoutOfSessionViews:(id)a0 withUserService:(id)a1;
- (void)updateRenderLayout:(id)a0;
- (void)disableSingleViewLayout;
- (void)updateValidSessionsWithSingleViewEnabled:(BOOL)a0;
- (void)updateLocalLayoutWithGuestOnSelf:(BOOL)a0;
- (void)updateLocalLayoutWithGuestOnOpposite:(BOOL)a0;
- (void)linkerLayoutDidChanged;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })ratioFrameOfPKLayout;
- (void)startLayout;
- (void)updateAnchorViewFrames;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfAnchor:(BOOL)a0;
- (void)updateAnchorPreviewFrameIfNeeded;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfSingleView:(BOOL)a0;
- (void).cxx_destruct;
- (id)videoView;

@end
