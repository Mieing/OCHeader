@class NSString;

@interface GetTransferWordingResponse : NSObject

@property (copy, nonatomic) NSString *delayConfirmWording;
@property (copy, nonatomic) NSString *delayConfirmSwitchWording;
@property (copy, nonatomic) NSString *delayHalfPageRemindWording;
@property (copy, nonatomic) NSString *delayConfirmSwitchRemindWording;
@property (nonatomic) BOOL delayConfirmDescUrlflag;
@property (copy, nonatomic) NSString *delayConfirmDescUrl;
@property (nonatomic) BOOL delayConfirmSwitchFlag;

- (void).cxx_destruct;

@end
