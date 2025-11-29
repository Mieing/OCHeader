@class NSURL;

@interface AWEShareFetchImageStage : AWEShareBaseStage

@property (retain, nonatomic) NSURL *imageURL;

- (BOOL)prepareBeforeRun;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (BOOL)shouldRun;
- (void)run;

@end
