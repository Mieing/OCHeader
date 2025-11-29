@class NSNumber, NSString;

@interface IESLiveOpenLiveNotificationPanelParamModel : IESLiveBridgeModel

@property (retain, nonatomic) NSNumber *status;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *secUserId;
@property (copy, nonatomic) NSString *userName;
@property (nonatomic) BOOL invokeUseEventCenter;

@end
