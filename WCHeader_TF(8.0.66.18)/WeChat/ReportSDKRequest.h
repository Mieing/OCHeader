@class BaseRequest, NSString, NSMutableArray, ReportTime;

@interface ReportSDKRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int businessId;
@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) ReportTime *reportTime;
@property (nonatomic) unsigned int networkType;
@property (nonatomic) unsigned long long userModeFlag;
@property (retain, nonatomic) NSMutableArray *itemDataList;
@property (nonatomic) unsigned long long itemConfsVersion;

+ (void)initialize;

- (void)setItemConfsVersion:(unsigned long long)a0;
- (unsigned long long)itemConfsVersion;
- (void)setItemDataList:(id)a0;
- (id)itemDataList;
- (void)setUserModeFlag:(unsigned long long)a0;
- (unsigned long long)userModeFlag;
- (void)setNetworkType:(unsigned int)a0;
- (unsigned int)networkType;
- (void)setReportTime:(id)a0;
- (id)reportTime;
- (void)setVersion:(id)a0;
- (id)version;
- (void)setBusinessId:(unsigned int)a0;
- (unsigned int)businessId;
- (void)setBaseRequest:(id)a0;
- (id)baseRequest;

@end
