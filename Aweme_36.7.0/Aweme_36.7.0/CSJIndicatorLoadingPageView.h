@class NSString, UIActivityIndicatorView;

@interface CSJIndicatorLoadingPageView : UIView <CSJLoadingPageProtocol>

@property (retain, nonatomic) UIActivityIndicatorView *activityIndicatorView;
@property (nonatomic) BOOL isPortrait;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
