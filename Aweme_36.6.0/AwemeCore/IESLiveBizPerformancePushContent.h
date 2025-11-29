@class NSString;

@interface IESLiveBizPerformancePushContent : NSObject

@property (nonatomic) BOOL enablePush;
@property (nonatomic) BOOL promptSwitch;
@property (copy, nonatomic) NSString *pushTitle;
@property (copy, nonatomic) NSString *pushContent;
@property (copy, nonatomic) NSString *pushReason;

- (void).cxx_destruct;

@end
