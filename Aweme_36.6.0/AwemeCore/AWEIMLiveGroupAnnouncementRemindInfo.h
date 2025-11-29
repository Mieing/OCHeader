@class NSString;

@interface AWEIMLiveGroupAnnouncementRemindInfo : AWEBaseApiModel

@property (nonatomic) unsigned long long remindStatus;
@property (copy, nonatomic) NSString *remindText;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
