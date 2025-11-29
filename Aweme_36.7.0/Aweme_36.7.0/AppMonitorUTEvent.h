@class NSString, NSMutableDictionary;

@interface AppMonitorUTEvent : NSObject

@property (retain, nonatomic) NSString *eventId;
@property (retain, nonatomic) NSString *page;
@property (retain, nonatomic) NSString *arg1;
@property (retain, nonatomic) NSString *arg2;
@property (retain, nonatomic) NSString *arg3;
@property (retain, nonatomic) NSMutableDictionary *args;

- (void).cxx_destruct;

@end
