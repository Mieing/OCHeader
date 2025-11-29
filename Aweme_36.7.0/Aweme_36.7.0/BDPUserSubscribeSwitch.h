@class NSString;

@interface BDPUserSubscribeSwitch : NSObject

@property (nonatomic) BOOL accept;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *templateId;
@property (nonatomic) long long reminderStatus;
@property (nonatomic) long long action;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
