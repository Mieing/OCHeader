@class NSString, FeedCardBackgroundVideoInfo, NSMutableArray;

@interface FeedCardBackgroundInfo : GPBMessage

@property (nonatomic) BOOL needShow;
@property (nonatomic) BOOL hasNeedShow;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) BOOL hasType;
@property (retain, nonatomic) FeedCardBackgroundVideoInfo *bgVideo;
@property (nonatomic) BOOL hasBgVideo;
@property (copy, nonatomic) NSString *bgPictureURL;
@property (nonatomic) BOOL hasBgPictureURL;
@property (copy, nonatomic) NSString *bgMusicURL;
@property (nonatomic) BOOL hasBgMusicURL;
@property (retain, nonatomic) NSMutableArray *bgPictureExtraUrlsArray;
@property (readonly, nonatomic) unsigned long long bgPictureExtraUrlsArray_Count;
@property (copy, nonatomic) NSString *bgColor;
@property (nonatomic) BOOL hasBgColor;

+ (id)descriptor;

@end
