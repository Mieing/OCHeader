@class NSString, IESGurdResError, IESGurdResourceOfflineCdnDownloadStat;

@interface IESGurdResourceAccessModel : NSObject

@property (copy, nonatomic) NSString *tag;
@property (nonatomic) long long accessType;
@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *bundle;
@property (nonatomic) unsigned long long id;
@property (nonatomic) long long resFrom;
@property (retain, nonatomic) IESGurdResError *resError;
@property (retain, nonatomic) IESGurdResourceOfflineCdnDownloadStat *offlineCdnDownloadStat;

- (void).cxx_destruct;

@end
