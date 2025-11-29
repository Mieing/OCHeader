@class NSString;

@interface WCMomentsMenuActionReportForwardInfo : MMObject

@property (nonatomic) long long forwardType;
@property (retain, nonatomic) NSString *toUsername;
@property (nonatomic) BOOL isAppendix;
@property (nonatomic) BOOL isForwardSuccess;

- (void).cxx_destruct;

@end
