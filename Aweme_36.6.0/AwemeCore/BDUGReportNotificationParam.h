@class NSString;

@interface BDUGReportNotificationParam : BDUGBaseRequestParam

@property (nonatomic) long long notiNum;
@property (nonatomic) long long badgeNum;
@property (copy, nonatomic) NSString *scene;

- (void).cxx_destruct;

@end
