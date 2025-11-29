@class MMUILongPressImageView, NSString, UIImageView, UIImage;
@protocol MMHeadImageViewDelegate;

@interface MMHeadImageView : MMUIView <IKFContactExt, IEnterpriseContactMgrExt, LongPressImageViewDelegate, MMImageLoaderObserver, IMsgExt, IHeadImageExt, IContactMgrExt, IStrangerContactMgrExt> {
    UIImageView *_borderImageView;
    NSString *_nsHeadImgUrl;
    BOOL _bAutoUpdate;
    id _oTarget;
    SEL _selAction;
    id _object;
    id _oLongPressTarget;
    SEL _selLongPressAction;
    id _oDoubleClickTarget;
    SEL _selDoubleClickAction;
    BOOL _isHeadImgExistedLocal;
}

@property (nonatomic) BOOL isResetToDefault;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (retain, nonatomic) UIImage *borderImage;
@property (retain, nonatomic) UIImage *borderImageHL;
@property (nonatomic) BOOL addBorder;
@property (readonly, nonatomic) NSString *nsUsrName;
@property (retain, nonatomic) MMUILongPressImageView *headImageView;
@property (nonatomic) unsigned int conerSize;
@property (retain, nonatomic) UIImage *defaultImage;
@property (nonatomic) unsigned char headUseScene;
@property (nonatomic) unsigned char headCategory;
@property (nonatomic, getter=isWxHighlighted) BOOL wxHighlighted;
@property (nonatomic) BOOL addStoryMaskAction;
@property (nonatomic) BOOL bAlwayShowDefaultImage;
@property (readonly, nonatomic) BOOL bRoundedCorner;
@property (weak, nonatomic) id<MMHeadImageViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithUsrName:(id)a0 headImgUrl:(id)a1 bAutoUpdate:(BOOL)a2 bRoundCorner:(BOOL)a3;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (double)preferCornerSize;
- (void)setHeadImageByName:(id)a0;
- (void)checkAndUpdateImage;
- (void)doUpdateHeadImg:(BOOL)a0;
- (id)getRealUserName:(id)a0;
- (void)updateUsrName:(id)a0 withHeadImgUrl:(id)a1;
- (void)updateExtensionRegister;
- (void)setWxHighlighted:(BOOL)a0;
- (void)onHeadImageChange:(id)a0;
- (void)onKFContactHeadImgUpdate:(id)a0;
- (void)setTarget:(id)a0 action:(SEL)a1;
- (void)setTarget:(id)a0 action:(SEL)a1 withObject:(id)a2;
- (void)setTargetForLongPress:(id)a0 action:(SEL)a1;
- (void)setTargetForDoubleClick:(id)a0 action:(SEL)a1;
- (void)setTargetForDoubleClick:(id)a0 action:(SEL)a1 inCell:(BOOL)a2;
- (void)updateHighlightRelatedSetting;
- (void)resetToDefaultImage;
- (void)updateHeadImage:(id)a0;
- (void)updateHeadImageUrl:(id)a0;
- (void)ImageDidLoad:(id)a0 Url:(id)a1;
- (void)ImageDidFail:(id)a0;
- (void)setHeadImageViewCornerRadius:(double)a0;
- (void)onModifyContact:(id)a0;
- (void)onStrangerContactUpdated:(id)a0;
- (void)onModifyEnterpriseContact:(id)a0;
- (void)OnPress:(id)a0;
- (void)OnLongPress:(id)a0;
- (void)OnImageDoubleClick:(id)a0;
- (void).cxx_destruct;

@end
