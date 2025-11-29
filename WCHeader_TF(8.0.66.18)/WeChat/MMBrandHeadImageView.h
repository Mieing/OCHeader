@class UIImageView, NSString, MMWebImageView;

@interface MMBrandHeadImageView : UIButton <IContactMgrExt, IStrangerContactMgrExt> {
    NSString *m_username;
}

@property (copy, nonatomic) id /* block */ onClickBlock;
@property (weak, nonatomic) id m_oTarget;
@property (nonatomic) SEL m_selAction;
@property (retain, nonatomic) id m_object;
@property (retain, nonatomic) UIImageView *m_frameView;
@property (retain, nonatomic) MMWebImageView *m_headView;
@property (nonatomic) struct CGSize { double width; double height; } m_headSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getFTSBrandHeadImageViewFromUrl:(id)a0 username:(id)a1;
+ (id)getFTSFeatureBrandHeadImageViewFromUrl:(id)a0 username:(id)a1;

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)TrySetDefaultHeadImage;
- (void)TrySetDefaultHeadImage:(id)a0;
- (void)SetHeadImage:(id)a0;
- (id)getUpdateUrl;
- (void)setUpdateUrl:(id)a0;
- (void)setUserName:(id)a0;
- (void)setHeadViewByUsername:(id)a0;
- (void)onModifyContact:(id)a0;
- (void)onStrangerContactUpdated:(id)a0;
- (void)layoutSubviews;
- (void)setTarget:(id)a0 action:(SEL)a1;
- (void)setTarget:(id)a0 action:(SEL)a1 withObject:(id)a2;
- (void)OnPress:(id)a0;
- (void)setOnClick:(id /* block */)a0;
- (void)onClick;
- (void).cxx_destruct;

@end
