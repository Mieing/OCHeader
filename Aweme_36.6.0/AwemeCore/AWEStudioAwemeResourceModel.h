@class NSArray, NSDictionary, NSURL, UIImage, NSMutableArray;

@interface AWEStudioAwemeResourceModel : NSObject

@property (retain, nonatomic) NSURL *localURL;
@property (copy, nonatomic) NSArray *images;
@property (retain, nonatomic) UIImage *coverImage;
@property (copy, nonatomic) NSDictionary *assets;
@property (retain, nonatomic) UIImage *firstFrame;
@property (retain, nonatomic) NSMutableArray *errListM;
@property (nonatomic) unsigned long long videoFrom;

- (void)logErr:(id)a0;
- (id)errList;
- (void).cxx_destruct;

@end
