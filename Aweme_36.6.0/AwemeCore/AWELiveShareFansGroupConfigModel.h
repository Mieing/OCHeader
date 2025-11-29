@class NSURL;

@interface AWELiveShareFansGroupConfigModel : NSObject

@property (retain, nonatomic) NSURL *firstCoveryUrl;
@property (retain, nonatomic) NSURL *secondCoveryUrl;
@property (retain, nonatomic) NSURL *resourceCoveryUrl;
@property (nonatomic) struct CGSize { double width; double height; } containerSize;

- (void).cxx_destruct;

@end
