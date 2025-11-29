@class NSString;

@interface MMLiveAnchorLiveMicReportHandler : MMLiveBaseReportHandler

@property (retain, nonatomic) NSString *roomId;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned int waitCount;
@property (nonatomic) unsigned int allowConnect;
@property (retain, nonatomic) NSString *audienceUin;
@property (nonatomic) unsigned int actionCode;
@property (nonatomic) unsigned int linkCount;

+ (void)MMLiveReportFieldAdd_roomId;
+ (void)MMLiveReportFieldAdd_liveId;
+ (void)MMLiveReportFieldAdd_waitCount;
+ (void)MMLiveReportFieldAdd_allowConnect;
+ (void)MMLiveReportFieldAdd_audienceUin;
+ (void)MMLiveReportFieldAdd_actionCode;
+ (void)MMLiveReportFieldAdd_linkCount;
+ (void)initialize;

- (void)report;
- (id)init;
- (void).cxx_destruct;

@end
