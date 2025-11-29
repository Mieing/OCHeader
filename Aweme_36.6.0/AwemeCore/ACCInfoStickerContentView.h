@class ACCInfoStickerConfig, NSString, UILabel, UIView, IESInfoStickerProps;
@protocol ACCStickerContainerProtocol, ACCStickerProtocol;

@interface ACCInfoStickerContentView : UIView <ACCStickerEditContentProtocol>

@property (weak, nonatomic) UILabel *authorLabel;
@property (nonatomic) BOOL bubbleShow;
@property (retain, nonatomic) ACCInfoStickerConfig *config;
@property (nonatomic) long long stickerId;
@property (nonatomic) BOOL shouldShowAuthor;
@property (nonatomic) BOOL authorAlignmentCenter;
@property (copy, nonatomic) NSString *authorName;
@property (nonatomic) long long authorPlatformType;
@property (nonatomic) BOOL authorViewIgnoreStickerContainerScale;
@property (nonatomic) BOOL isCustomUploadSticker;
@property (nonatomic) BOOL deselectWhenNotDisplay;
@property (weak, nonatomic) UIView<ACCStickerProtocol> *wrapperView;
@property (retain, nonatomic) IESInfoStickerProps *stickerInfos;
@property (nonatomic, getter=isTransparent) BOOL transparent;
@property (copy, nonatomic) id /* block */ triggerDragDeleteCallback;
@property (copy, nonatomic) id /* block */ coordinateDidChange;
@property (weak, nonatomic) id<ACCStickerContainerProtocol> stickerContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)stickerViewIdentifier;
- (void)updateWithCurrentPlayerTime:(double)a0;
- (id)copyForContext:(id)a0;
- (void)updateWithInstance:(id)a0 context:(id)a1;
- (id)authorPlatformDesc:(long long)a0;
- (void)p_updateAuthorViewFrame;
- (void)buildAuthorViewIfNeeded;
- (void)removeAuthorView;
- (void)updateViewTransparent:(BOOL)a0;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityHint;

@end
