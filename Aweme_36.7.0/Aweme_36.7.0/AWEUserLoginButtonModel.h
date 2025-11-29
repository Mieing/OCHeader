@class NSString, AWELoginButtonTagModel, UIImage;

@interface AWEUserLoginButtonModel : NSObject

@property (copy, nonatomic) NSString *successTitle;
@property (copy, nonatomic) NSString *normalTitle;
@property (copy, nonatomic) NSString *loadingTitle;
@property (retain, nonatomic) AWELoginButtonTagModel *tagModel;
@property (nonatomic) BOOL shouldEnlargeButton;
@property (nonatomic) BOOL shouldShowNewLoading;
@property (nonatomic) BOOL shouldDisableSweep;
@property (retain, nonatomic) UIImage *iconImage;

- (id)initWithNormalTitle:(id)a0 loadingTitle:(id)a1 successTitle:(id)a2 tagModel:(id)a3;
- (void).cxx_destruct;

@end
