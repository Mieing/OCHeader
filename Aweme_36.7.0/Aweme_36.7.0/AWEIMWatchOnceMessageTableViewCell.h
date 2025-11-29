@class UIView, NSString, AWEIMShapeView, UIImageView, AWEIMMessageAttachmentUploadViewModel, AWEGradientView, YYLabel, AWEIMMessage, AWEIMUploadProgressView, UILabel;
@protocol AWEIMWatchOnceMessageProtocol;

@interface AWEIMWatchOnceMessageTableViewCell : AWEIMUserMessageTableViewCell <AWEIMPreTaskProtocol, AWEIMGradientBubbleProtocol, IESIMOldCellZoomTransitionProtocol>

@property (readonly, nonatomic) id<AWEIMWatchOnceMessageProtocol> watchOnceMessage;
@property (retain, nonatomic) AWEGradientView *bubbleView;
@property (retain, nonatomic) UIImageView *iconImage;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEIMShapeView *watchEndView;
@property (retain, nonatomic) AWEIMShapeView *beforeWatchView;
@property (retain, nonatomic) UILabel *watchEndLabel;
@property (retain, nonatomic) YYLabel *beforeWatchLabel;
@property (retain, nonatomic) UIImageView *watchEndIconView;
@property (retain, nonatomic) UIImageView *beforeWatchIconView;
@property (retain, nonatomic) AWEIMMessageAttachmentUploadViewModel *uploadVM;
@property (retain, nonatomic) AWEIMUploadProgressView *sendProgressView;
@property (nonatomic) BOOL isAnimated;
@property (readonly, nonatomic) UIView *targetView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) AWEIMMessage *message;
@property (readonly, nonatomic) UIView *gradientBubbleView;

+ (struct CGSize { double x0; double x1; })contentSizeWithMesasge:(id)a0;
+ (struct CGSize { double x0; double x1; })textSizeWithText:(id)a0;
+ (double)maxWidthWithMessage:(id)a0 isBeforeRead:(BOOL)a1;
+ (id)p_getAttributeStringCore:(id)a0;
+ (id)p_getDisplayStringCore:(id)a0;
+ (id)contentAttributesCoreWithMessage:(id)a0;

- (id)preloadTasksForMessage:(id)a0;
- (void)bubbleViewTapped:(id)a0;
- (void)p_addNotification;
- (void)p_resetUI;
- (void)configWithMessage:(id)a0;
- (id)menuTargetView;
- (void)p_layoutViews;
- (BOOL)menuViewRectContainsPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)completeCoverageTaskForMessage:(id)a0 error:(id)a1;
- (void)p_observeWatchEnd;
- (void)p_remarkMessageWatchEnd;
- (void)p_themeChange;
- (void)p_updateWatchEndIcon;
- (void)p_updateWatchEndView;
- (void)p_updateBeforeWatchView;
- (id)p_getAttributeString:(id)a0;
- (id)beforeWatchLayer;
- (id)watchEndLayer;
- (void)p_changeUploadingState:(BOOL)a0;
- (void)layoutBubbleView:(id)a0;
- (void)layoutWatchEndView:(id)a0;
- (void)layoutBeforeWatchView:(id)a0;
- (id)p_getDisplayString:(id)a0;
- (void)p_observeUploadVMWithNextFileID:(id)a0;
- (id)p_title:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (id)contentAttributes;
- (id)menuItems;
- (void)layoutSubviews;
- (id)videoContainerView;

@end
