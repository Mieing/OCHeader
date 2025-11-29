@class IESLiveAvatarsCombineViewConfig;

@interface IESLiveAvatarsCombineView : UIView

@property (retain, nonatomic) IESLiveAvatarsCombineViewConfig *config;

+ (struct CGSize { double x0; double x1; })sizeOfView:(id)a0;

- (void)setupSubViews;
- (void).cxx_destruct;
- (void)updateWithConfig:(id)a0;
- (id)initWithConfig:(id)a0;

@end
