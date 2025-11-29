@class NSURL;

@interface IESLiveCoveryImageComposeConfig : NSObject

@property (retain, nonatomic) NSURL *firstCoveryUrl;
@property (retain, nonatomic) NSURL *secondCoveryUrl;
@property (retain, nonatomic) NSURL *resourceCoveryUrl;
@property (nonatomic) struct CGSize { double width; double height; } containerSize;
@property (nonatomic) long long composeDirection;
@property (copy, nonatomic) id /* block */ composeLayout;

- (void).cxx_destruct;

@end
