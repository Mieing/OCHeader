@class NSString;

@interface AWEVCDNextActionButton : UIButton

@property (copy, nonatomic) NSString *normalTitle;
@property (nonatomic) BOOL isWhiteBackGround;

- (id)loadingAnimation;
- (void).cxx_destruct;
- (id)init;
- (void)startLoading;
- (void)stopLoading;

@end
