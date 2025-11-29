@interface AWEProgressStatusConfig : NSObject

@property (nonatomic) unsigned long long progressStatus;
@property (nonatomic) unsigned long long triggerAction;
@property (nonatomic) BOOL shouldAnimat;
@property (nonatomic) double delayTimeToChangeStatus;
@property (nonatomic) unsigned long long blockStatus;
@property (retain, nonatomic) AWEProgressStatusConfig *nextStatusConfig;

- (void).cxx_destruct;

@end
