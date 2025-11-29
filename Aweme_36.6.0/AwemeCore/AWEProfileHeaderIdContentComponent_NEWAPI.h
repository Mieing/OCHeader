@class UIFont, AWEProfileHeaderContext, AWERLVirtualLabel, UIImage, AWEUserModel, AWERLVirtualFlexView, AWERLVirtualImageView, NSString, UIColor;

@interface AWEProfileHeaderIdContentComponent_NEWAPI : AWEProfileHeaderBaseComponent <AWEProfileHeaderComponentWidthAdaptionProtocol, AWEUserMessage>

@property (retain, nonatomic) AWERLVirtualFlexView *virtualContainer;
@property (retain, nonatomic) AWERLVirtualLabel *privateVirtualView;
@property (retain, nonatomic) AWERLVirtualLabel *idLabelVirtualView;
@property (retain, nonatomic) AWERLVirtualImageView *iconVirtualView;
@property (nonatomic) double containerWidth;
@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) AWEProfileHeaderContext *headerContext;
@property (nonatomic) BOOL hasConfigIcon;
@property (retain, nonatomic) UIColor *labelColor;
@property (retain, nonatomic) UIFont *labelFont;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } containerPadding;
@property (nonatomic) double contentHeight;
@property (retain, nonatomic) UIImage *iconImage;
@property (copy, nonatomic) id /* block */ iconTapBlock;
@property (retain, nonatomic) NSString *iconAccessibilityLabel;
@property (retain, nonatomic) UIColor *shadowColor;
@property (nonatomic) double shadowOpacity;
@property (nonatomic) double shadowRadius;
@property (nonatomic) struct CGSize { double width; double height; } shadowOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (id)buildVirtualView:(id)a0;
- (void)updateContainerWidth:(double)a0;
- (void)updateComponentData:(id)a0;
- (id)initWithData:(id)a0 context:(id)a1 maxWidth:(double)a2;
- (void)followStatusDidChange:(id)a0;
- (void)configForProfileHeader;
- (void)configIconIfNeeded;
- (BOOL)shouldShowIdContentComponent;
- (BOOL)shouldShowPrivateLabel;
- (id)idPrefixStr;
- (void).cxx_destruct;
- (void)dealloc;
- (id)idStr;

@end
