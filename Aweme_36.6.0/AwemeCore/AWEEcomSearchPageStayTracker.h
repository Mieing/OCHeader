@class NSMutableDictionary;

@interface AWEEcomSearchPageStayTracker : NSObject

@property (retain) NSMutableDictionary *eventDict;

+ (id)uniqueIdWithParams:(id)a0;
+ (id)sharedTracker;

- (id)getPageEventWithUniqueId:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
