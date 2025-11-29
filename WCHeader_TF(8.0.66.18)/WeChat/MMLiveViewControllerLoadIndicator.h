@class NSString, MMUIViewController, MMLiveViewControllerLoadIndicatorOptions;

@interface MMLiveViewControllerLoadIndicator : NSObject <MMLiveLoadIndicating>

@property (weak, nonatomic) MMUIViewController *viewController;
@property (retain, nonatomic) MMLiveViewControllerLoadIndicatorOptions *options;
@property (nonatomic) BOOL loading;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewController:(id)a0 options:(id)a1;
- (void)dealloc;
- (void)startLoading;
- (void)endLoadingSuccessfully:(BOOL)a0 message:(id)a1;
- (void).cxx_destruct;

@end
