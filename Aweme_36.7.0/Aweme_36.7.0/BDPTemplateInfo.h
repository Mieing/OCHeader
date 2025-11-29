@class NSString, NSDictionary;

@interface BDPTemplateInfo : NSObject

@property (copy, nonatomic) NSString *templateId;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) unsigned long long status;
@property (nonatomic) unsigned long long modelType;
@property (nonatomic) unsigned long long timesType;
@property (copy, nonatomic) NSDictionary *limitDict;
@property (nonatomic) double templateTimeStamp;
@property (nonatomic) unsigned long long feedShowStatus;
@property (nonatomic) unsigned long long reminderStatus;
@property (nonatomic) unsigned long long trackOnlyOriginReminderStatus;

- (void).cxx_destruct;

@end
