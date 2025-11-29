@class NSString, NSURL;

@interface AWEIMShareDSPMusicContentPresenterProps : AWEIMUIViewPresenterProps

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSURL *coverURL;
@property (nonatomic) unsigned long long status;
@property (copy, nonatomic) id /* block */ tapActionBlock;
@property (copy, nonatomic) id /* block */ tapPlayButtonActionBlock;

- (void).cxx_destruct;

@end
