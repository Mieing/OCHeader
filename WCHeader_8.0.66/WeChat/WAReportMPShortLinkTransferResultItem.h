@class NSString;

@interface WAReportMPShortLinkTransferResultItem : WAReportBaseItem

@property (copy, nonatomic) NSString *mpShortLink;
@property (nonatomic) int result;
@property (nonatomic) BOOL isCache;
@property (copy, nonatomic) NSString *resultAppid;
@property (nonatomic) unsigned int resultAppVersion;
@property (nonatomic) unsigned int resultAppState;
@property (copy, nonatomic) NSString *resultPagePath;
@property (copy, nonatomic) NSString *resultNickName;

- (int)reportID;
- (id)reportString;
- (void).cxx_destruct;

@end
