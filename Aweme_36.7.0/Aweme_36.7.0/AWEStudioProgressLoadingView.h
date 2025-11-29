@class NSString, AWEProgressLoadingView;

@interface AWEStudioProgressLoadingView : NSObject <AWEStudioProgressLoadingViewProtocol>

@property (retain, nonatomic) AWEProgressLoadingView *progressView;
@property (nonatomic) double progress;
@property (readonly, nonatomic) long long status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)targetProgressView;
- (void).cxx_destruct;
- (void)dismissAnimated:(BOOL)a0;
- (id)initWithType:(long long)a0 title:(id)a1;
- (void)showAnimated:(BOOL)a0;

@end
