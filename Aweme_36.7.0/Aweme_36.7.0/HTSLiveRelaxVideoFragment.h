@class NSString, HTSLiveImage, NSMutableArray;

@interface HTSLiveRelaxVideoFragment : IESLivePBBaseMessage

@property (nonatomic) long long type;
@property (retain, nonatomic) HTSLiveImage *cover;
@property (nonatomic) BOOL hasCover;
@property (nonatomic) long long fragmentId;
@property (nonatomic) long long itemId;
@property (nonatomic) long long status;
@property (nonatomic) long long playNumber;
@property (nonatomic) long long duration;
@property (nonatomic) int paidLiveType;
@property (copy, nonatomic) NSString *fragmentIdStr;
@property (copy, nonatomic) NSString *itemIdStr;
@property (copy, nonatomic) NSString *vsEpisodeIdStr;
@property (nonatomic) long long diggCount;
@property (copy, nonatomic) NSString *vid;
@property (copy, nonatomic) NSString *m3U8URL;
@property (retain, nonatomic) NSMutableArray *tsUrlsArray;
@property (readonly, nonatomic) unsigned long long tsUrlsArray_Count;
@property (nonatomic) long long playMode;
@property (nonatomic) long long preload;
@property (copy, nonatomic) NSString *highlightType;
@property (nonatomic) int genStatus;
@property (nonatomic) long long liveType;

+ (id)descriptor;

@end
