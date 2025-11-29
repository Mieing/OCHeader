@class IESLivePKGuestAvatarsCombineViewConfig;

@interface IESLivePKGuestAvatarsCombineView : UIView

@property (retain, nonatomic) IESLivePKGuestAvatarsCombineViewConfig *config;

+ (struct CGSize { double x0; double x1; })sizeOfView:(id)a0;

- (void)setupSubViews;
- (void).cxx_destruct;
- (void)updateWithConfig:(id)a0;
- (id)initWithConfig:(id)a0;

@end
