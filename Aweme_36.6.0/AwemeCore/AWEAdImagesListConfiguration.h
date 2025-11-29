@class NSArray, NSString, NSNumber;

@interface AWEAdImagesListConfiguration : NSObject

@property (copy, nonatomic) NSArray *imageList;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long defaultIndex;
@property (nonatomic) BOOL isLiked;
@property (retain, nonatomic) NSNumber *likeCount;
@property (copy, nonatomic) id /* block */ likeClickAction;

- (void).cxx_destruct;

@end
