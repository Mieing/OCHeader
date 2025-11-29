@class NSString, NSMutableArray, PublishUGCToGameCenterRequest_VideoInfo;

@interface PublishUGCToGameCenterRequest_BusinessInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *title;
@property (nonatomic) unsigned int videoWidth;
@property (nonatomic) unsigned int videoHeight;
@property (nonatomic) unsigned int videoDuration;
@property (retain, nonatomic) NSString *gameAppid;
@property (retain, nonatomic) NSMutableArray *groupOpenidList;
@property (retain, nonatomic) NSMutableArray *gameOpenidList;
@property (retain, nonatomic) NSString *battleId;
@property (retain, nonatomic) PublishUGCToGameCenterRequest_VideoInfo *videoInfo;
@property (retain, nonatomic) NSMutableArray *picList;
@property (retain, nonatomic) NSMutableArray *picMetaList;
@property (nonatomic) unsigned int controlFlag;
@property (nonatomic) unsigned int testFlag;
@property (retain, nonatomic) NSString *originalVid;

+ (void)initialize;

@end
