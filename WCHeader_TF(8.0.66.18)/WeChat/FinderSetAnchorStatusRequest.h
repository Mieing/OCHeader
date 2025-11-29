@class BaseRequest, NSString, NSData, FinderBaseRequest, FinderStartLiveReportInfo;

@interface FinderSetAnchorStatusRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSData *anchorStatusBuffer;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned int liveStatus;
@property (retain, nonatomic) NSString *objectNonceId;
@property (nonatomic) unsigned long long anchorStatusOpFlag;
@property (nonatomic) unsigned long long anchorSettingOpFlag;
@property (retain, nonatomic) FinderStartLiveReportInfo *startReportInfo;
@property (retain, nonatomic) NSData *createLiveBubbleBuffer;

+ (void)initialize;

@end
