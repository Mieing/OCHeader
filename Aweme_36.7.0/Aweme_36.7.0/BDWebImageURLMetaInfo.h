@class NSURL, NSArray;

@interface BDWebImageURLMetaInfo : NSObject

@property (retain, nonatomic) NSURL *currentURL;
@property (copy, nonatomic) NSArray *alternativeURLs;
@property (nonatomic) struct CGSize { double width; double height; } viewSize;

- (void).cxx_destruct;
- (id)init;

@end
