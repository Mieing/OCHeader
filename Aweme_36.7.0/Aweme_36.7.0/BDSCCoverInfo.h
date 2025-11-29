@class NSString;

@interface BDSCCoverInfo : NSObject

@property (copy, nonatomic) NSString *coverURL;
@property (nonatomic) struct CGSize { double width; double height; } coverSize;
@property (copy, nonatomic) NSString *blurURL;
@property (copy, nonatomic) NSString *blurDefaultColor;

- (id)coverExtra;
- (void).cxx_destruct;

@end
