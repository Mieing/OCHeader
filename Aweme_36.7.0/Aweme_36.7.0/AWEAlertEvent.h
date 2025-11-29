@class NSString;

@interface AWEAlertEvent : NSObject <AWEAlertEventProtocol>

@property (nonatomic) long long eventEnum;
@property (readonly, nonatomic) NSString *eventID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventID;
+ (id)eventDescription;


@end
