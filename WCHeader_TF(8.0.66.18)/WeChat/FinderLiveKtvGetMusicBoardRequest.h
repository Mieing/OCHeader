@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderLiveKtvGetMusicBoardRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *anchorFinderUsername;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned int boardType;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int subBoardType;
@property (nonatomic) unsigned long long songListVersion;

+ (void)initialize;

@end
