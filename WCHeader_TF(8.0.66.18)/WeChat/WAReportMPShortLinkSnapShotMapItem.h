@class NSString;

@interface WAReportMPShortLinkSnapShotMapItem : WAReportBaseItem

@property (copy, nonatomic) NSString *mpShortLink;
@property (copy, nonatomic) NSString *snapshotCDNUrl;
@property (copy, nonatomic) NSString *currentPathQuery;
@property (copy, nonatomic) NSString *currentPageTitle;

- (int)reportID;
- (id)reportString;
- (void).cxx_destruct;

@end
