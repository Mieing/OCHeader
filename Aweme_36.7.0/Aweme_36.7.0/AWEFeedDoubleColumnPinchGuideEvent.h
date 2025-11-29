@class NSString;

@interface AWEFeedDoubleColumnPinchGuideEvent : NSObject <AWEAlertEventProtocol>

@property (nonatomic) long long alertType;
@property (retain, nonatomic) NSString *fromItemID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventID;
+ (id)eventDescription;

- (void).cxx_destruct;

@end
