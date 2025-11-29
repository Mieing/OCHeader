@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderLiveKtvSearchMusicSmartBoxRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *anchorFinderUsername;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSString *searchKey;
@property (retain, nonatomic) NSString *searchId;

+ (void)initialize;

@end
