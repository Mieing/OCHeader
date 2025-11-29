@class NSString, IESGurdResourceOfflineCdnDownloadStat;

@interface IESGurdResError : NSObject

@property (retain, nonatomic) IESGurdResourceOfflineCdnDownloadStat *offlineCdnDownloadStat;
@property (nonatomic) int offlineCode;
@property (copy, nonatomic) NSString *offlineMessage;
@property (nonatomic) int cdnCode;
@property (copy, nonatomic) NSString *cdnMessage;
@property (nonatomic) int updateCode;
@property (copy, nonatomic) NSString *updateMessage;

- (void).cxx_destruct;

@end
