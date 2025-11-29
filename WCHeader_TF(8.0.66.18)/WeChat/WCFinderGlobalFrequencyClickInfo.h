@class NSString;

@interface WCFinderGlobalFrequencyClickInfo : NSObject

@property (copy, nonatomic) NSString *lastClickEntryPath;
@property (nonatomic) BOOL lastClickWithRedDot;
@property (nonatomic) long long lastTabType;
@property (retain, nonatomic) NSString *lastFeedId;
@property (retain, nonatomic) NSString *lastReportExtInfo;

- (id)init;
- (void).cxx_destruct;

@end
