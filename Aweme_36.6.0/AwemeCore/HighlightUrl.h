@class NSString, NSMutableArray, HTSLiveImage;

@interface HighlightUrl : IESLivePBBaseMessage

@property (nonatomic) long long hlId;
@property (copy, nonatomic) NSString *m3U8URL;
@property (retain, nonatomic) NSMutableArray *tsUrlsArray;
@property (readonly, nonatomic) unsigned long long tsUrlsArray_Count;
@property (copy, nonatomic) NSString *challenge;
@property (copy, nonatomic) NSString *body;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (retain, nonatomic) HTSLiveImage *cover;
@property (nonatomic) BOOL hasCover;
@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (nonatomic) long long relativeTime;
@property (nonatomic) int subOrientation;
@property (nonatomic) int type;
@property (copy, nonatomic) NSString *reason;

+ (id)descriptor;

@end
