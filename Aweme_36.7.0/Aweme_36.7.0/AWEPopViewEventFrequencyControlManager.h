@class NSMutableDictionary;

@interface AWEPopViewEventFrequencyControlManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *eventFrequencyControlReCordDict;

- (BOOL)forbidTriggerEvent:(id)a0;
- (BOOL)hitEventFrequencyControlWithEventID:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
