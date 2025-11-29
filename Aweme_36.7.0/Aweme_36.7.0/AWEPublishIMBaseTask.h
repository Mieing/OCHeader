@class NSArray, NSString;

@interface AWEPublishIMBaseTask : AWEPublishCommonTask

@property (copy, nonatomic) NSArray *shareList;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *taskID;
@property (nonatomic) double clickSendTimestamp;
@property (nonatomic) BOOL createGroup;
@property (nonatomic) BOOL notDismissLoadingOnFinish;
@property (copy, nonatomic) NSString *trackEnterMethod;
@property (copy, nonatomic) NSString *trackShootWay;
@property (copy, nonatomic) NSString *trackEnterFrom;

- (id)commonNotificationInfo;
- (void).cxx_destruct;
- (void)resume;

@end
