@class NSNumber, NSString;

@interface AWELiteActivityPopupCalendarModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *remindStartTime;
@property (retain, nonatomic) NSNumber *remindCount;
@property (copy, nonatomic) NSString *remindTitle;
@property (retain, nonatomic) NSNumber *triggerBeforeMins;
@property (retain, nonatomic) NSNumber *durationMinutes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
