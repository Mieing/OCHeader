@class NSString;

@interface EmoticonStoreReportInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long searchId;
@property (nonatomic) unsigned long long docId;
@property (nonatomic) unsigned long long sessionId;
@property (nonatomic) unsigned int index;
@property (retain, nonatomic) NSString *info;
@property (nonatomic) int pageScene;
@property (nonatomic) unsigned int thirdPartyLinkId;
@property (nonatomic) unsigned int thirdPartyLinkStatus;
@property (retain, nonatomic) NSString *thirdPartyLinkReportInfo;
@property (retain, nonatomic) NSString *reqId;

+ (void)initialize;

@end
