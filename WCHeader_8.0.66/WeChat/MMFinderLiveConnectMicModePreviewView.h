@class NSMutableDictionary, NSString, NSArray, UIImageView, UIView, NSMutableArray, MMFinderLiveConnectMicModePreviewItemView;

@interface MMFinderLiveConnectMicModePreviewView : UIView <MMLiveTaskMgrExt, MMLiveTrtcRenderingNotificationDelegate>

@property (nonatomic) unsigned long long mode;
@property (retain, nonatomic) NSString *focusedUserId;
@property (nonatomic) unsigned long long anchorMicIndex;
@property (retain, nonatomic) NSArray *micUsers;
@property (retain, nonatomic) NSString *anchorSdkUserId;
@property (nonatomic) BOOL isAnchorMicMode;
@property (retain, nonatomic) UIView *previewContainerView;
@property (retain, nonatomic) UIView *placeholderContainerView;
@property (retain, nonatomic) UIImageView *placeholderGridView;
@property (retain, nonatomic) NSMutableArray *placeholderViews;
@property (retain, nonatomic) MMFinderLiveConnectMicModePreviewItemView *anchorPreviewView;
@property (retain, nonatomic) NSMutableDictionary *previewViews;
@property (readonly, nonatomic) double preferredAspectRatio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })previewAreaSizeWithContainerSize:(struct CGSize { double x0; double x1; })a0 aspectRatio:(double)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 anchorBackgroundImage:(id)a1 orBackgroundImageUri:(id)a2 avatarUri:(id)a3 anchorSdkUserId:(id)a4 isAnchorMicMode:(BOOL)a5;
- (void)updatePreviewWithAnchorMicIndex:(unsigned long long)a0 micUsers:(id)a1;
- (void)setMode:(unsigned long long)a0 focusedUserId:(id)a1;
- (void)layoutSubviews;
- (void)onLiveTask:(id)a0 renderImageBuffer:(struct __CVBuffer { } *)a1 forUserId:(id)a2;
- (void)setupAnchorPreviewViewWithAnchorBackgroundImage:(id)a0 orBackgroundImageUri:(id)a1 avatarUri:(id)a2;
- (void)addPreviewViewForUser:(id)a0;
- (void)removePreviewViewForUserId:(id)a0;
- (void)addPlaceholderView;
- (void)removePlaceholderView;
- (void)layoutForAnchorMicMode;
- (void)layoutForStandardMode;
- (void)layoutForStandardModeWithAspectRatio:(double)a0;
- (void)layoutForFocusMode;
- (void)layoutForGrabMode;
- (void)layoutForLeadMode;
- (void)layoutPlaceholderViewsWithOccupiedIndices:(id)a0 mode:(unsigned long long)a1 totalSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;

@end
