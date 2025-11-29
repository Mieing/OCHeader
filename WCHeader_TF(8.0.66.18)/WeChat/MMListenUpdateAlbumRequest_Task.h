@class NSString;

@interface MMListenUpdateAlbumRequest_Task : WXPBGeneratedMessage

@property (nonatomic) int type;
@property (retain, nonatomic) NSString *categoryId;
@property (retain, nonatomic) NSString *albumListenId;
@property (retain, nonatomic) NSString *listenId;
@property (retain, nonatomic) NSString *subCategoryId;
@property (nonatomic) BOOL isFinderUpload;
@property (nonatomic) int offset;
@property (retain, nonatomic) NSString *songDesc;
@property (nonatomic) unsigned int reviewCreatorType;
@property (retain, nonatomic) NSString *reviewFinderUsername;
@property (retain, nonatomic) NSString *reviewCategoryId;
@property (retain, nonatomic) NSString *voiceReviewUrl;
@property (nonatomic) unsigned int voiceReviewDuration;
@property (nonatomic) unsigned int voiceReviewRecordVolume;
@property (nonatomic) unsigned int reviewType;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *author;
@property (retain, nonatomic) NSString *headImg;
@property (retain, nonatomic) NSString *cover;
@property (nonatomic) BOOL isPublic;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSString *desc;
@property (nonatomic) int sourceType;
@property (nonatomic) BOOL isAutoReplaceMv;
@property (nonatomic) int verifyStatus;
@property (nonatomic) unsigned long long singerId;
@property (nonatomic) unsigned long long singerFinderUin;
@property (nonatomic) unsigned int collabId;
@property (retain, nonatomic) NSString *recommendCover;

+ (void)initialize;

@end
