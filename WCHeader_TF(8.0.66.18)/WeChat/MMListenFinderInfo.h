@class MMListenFinderScaleInfo, NSString, MMListenAudioAlignment, NSData;

@interface MMListenFinderInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *tid;
@property (retain, nonatomic) NSString *nonceId;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *author;
@property (retain, nonatomic) NSString *cover;
@property (nonatomic) int duration;
@property (retain, nonatomic) NSString *headImg;
@property (retain, nonatomic) NSString *authorUsername;
@property (nonatomic) BOOL isPlayable;
@property (retain, nonatomic) MMListenAudioAlignment *audioAlign;
@property (retain, nonatomic) NSData *fromSessionIdInfo;
@property (retain, nonatomic) NSString *fullCoverUrl;
@property (nonatomic) float width;
@property (nonatomic) float height;
@property (retain, nonatomic) NSString *descTitle;
@property (retain, nonatomic) NSString *descDetail;
@property (nonatomic) int mediaType;
@property (retain, nonatomic) NSString *albumCategoryId;
@property (nonatomic) unsigned long long createTime;
@property (nonatomic) unsigned long long finderUin;
@property (nonatomic) int audioStatus;
@property (retain, nonatomic) NSString *exportId;
@property (nonatomic) unsigned int importFlag;
@property (retain, nonatomic) MMListenFinderScaleInfo *scaleInfo;

+ (void)initialize;

@end
