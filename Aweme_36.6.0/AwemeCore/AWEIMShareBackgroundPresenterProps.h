@class NSString;

@interface AWEIMShareBackgroundPresenterProps : AWEIMUIViewPresenterProps

@property (copy, nonatomic) id /* block */ coverTappedActionBlock;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *skey;
@property (copy, nonatomic) NSString *url;
@property (nonatomic) BOOL rip;

- (void).cxx_destruct;

@end
