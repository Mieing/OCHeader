@class NSString, NSMutableArray;

@interface FeedCardSwiperBackgroundItem : GPBMessage

@property (retain, nonatomic) NSMutableArray *srcArray;
@property (readonly, nonatomic) unsigned long long srcArray_Count;
@property (nonatomic) int height;
@property (nonatomic) BOOL hasHeight;
@property (nonatomic) int width;
@property (nonatomic) BOOL hasWidth;
@property (copy, nonatomic) NSString *videoId;
@property (nonatomic) BOOL hasVideoId;
@property (copy, nonatomic) NSString *poster;
@property (nonatomic) BOOL hasPoster;
@property (copy, nonatomic) NSString *defaultPicURL;
@property (nonatomic) BOOL hasDefaultPicURL;

+ (id)descriptor;

@end
