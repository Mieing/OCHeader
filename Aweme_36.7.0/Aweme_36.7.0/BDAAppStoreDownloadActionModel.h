@class UIViewController;

@interface BDAAppStoreDownloadActionModel : BDAAppStoreActionModel

@property (nonatomic) long long skoverlayPos;
@property (retain, nonatomic) UIViewController *containerController;
@property (copy, nonatomic) id /* block */ presentCompletion;
@property (copy, nonatomic) id /* block */ dismissCompletion;
@property (copy, nonatomic) id /* block */ willPresentCompletion;

- (void).cxx_destruct;

@end
