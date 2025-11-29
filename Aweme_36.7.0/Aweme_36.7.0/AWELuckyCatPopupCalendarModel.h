@class NSString;

@interface AWELuckyCatPopupCalendarModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *remindStartTime;
@property (copy, nonatomic) NSString *remindCount;
@property (copy, nonatomic) NSString *remindTitle;
@property (copy, nonatomic) NSString *triggerBeforeMins;
@property (copy, nonatomic) NSString *durationMinutes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
