@class NSURL, UIImage, NSMutableArray;

@interface AWEEditChapterAwemeResourceModel : NSObject

@property (retain, nonatomic) NSURL *localURL;
@property (retain, nonatomic) UIImage *coverImage;
@property (retain, nonatomic) UIImage *firstFrame;
@property (retain, nonatomic) NSMutableArray *errListM;
@property (nonatomic) unsigned long long videoFrom;

- (void)logErr:(id)a0;
- (id)errList;
- (void).cxx_destruct;

@end
