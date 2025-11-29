@class FinderCmdItem, BaseRequest, NSString, FinderBaseRequest;

@interface FinderLiveModShopShelfRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) FinderCmdItem *cmdItem;
@property (retain, nonatomic) NSString *finderUsername;

+ (void)initialize;

@end
