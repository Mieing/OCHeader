@class AWEUserLoginBaseViewModel, UIImageView, NSString, UILabel, UIView;
@protocol AWEUserLoginViewModelSecondaryProtocol;

@interface AWELGTitleIconComponent : NSObject <AWEUserUIComponentProtocol>

@property (retain, nonatomic) UIView *lgContainerView;
@property (retain, nonatomic) UIImageView *lgIconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) AWEUserLoginBaseViewModel<AWEUserLoginViewModelSecondaryProtocol> *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupComponentView;
- (id)initWithLoginViewModel:(id)a0;
- (void)addSubTitleLabelForCarrierLogin;
- (void).cxx_destruct;
- (unsigned long long)componentType;
- (id)componentView;

@end
