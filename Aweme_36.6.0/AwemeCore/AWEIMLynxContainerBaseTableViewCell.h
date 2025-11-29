@class NSString, UIView;
@protocol AWEEnterpriseIMMessageViewProtocol;

@interface AWEIMLynxContainerBaseTableViewCell : AWEIMFirstResponderUserMessageTableViewCell

@property (retain, nonatomic) UIView *lynxPlaceholderView;
@property (readonly, nonatomic) UIView *lynxEngine;
@property (retain, nonatomic) UIView<AWEEnterpriseIMMessageViewProtocol> *enterpriseLynxEngine;
@property (copy, nonatomic) NSString *type;

+ (struct CGSize { double x0; double x1; })contentSizeWithMesasge:(id)a0;
+ (double)recommendLynxHeightForMessage:(id)a0;
+ (id)identifier;

- (id)lynxInitialProperties;
- (void)configWithMessage:(id)a0;
- (id)menuTargetView;
- (id)firstResponderContainerView;
- (void)p_handleLynxEngineWith:(id)a0;
- (void)p_handleLynxBlock;
- (void)p_tryUploadLoadViewTimeWithSuccess:(BOOL)a0 duration:(long long)a1;
- (void).cxx_destruct;
- (id)menuItems;
- (void)layoutSubviews;
- (id)sourceUrl;
- (void)didEndDisplaying;

@end
