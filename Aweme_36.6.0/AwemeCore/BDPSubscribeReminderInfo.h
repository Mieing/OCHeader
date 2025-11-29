@class NSString;

@interface BDPSubscribeReminderInfo : NSObject <BDModelCustom>

@property (nonatomic) unsigned long long reminderType;
@property (nonatomic) unsigned long long reminderStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;


@end
