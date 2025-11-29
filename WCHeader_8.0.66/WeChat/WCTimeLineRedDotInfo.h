@class NSString;

@interface WCTimeLineRedDotInfo : NSObject

@property long long redNumber;
@property BOOL hasRedDot;
@property (retain) NSString *redFeedId;

+ (id)safeJSONStringWithObject:(id)a0;
+ (id)safeStringWithString:(id)a0;

- (id)toJsonStr;
- (void).cxx_destruct;

@end
