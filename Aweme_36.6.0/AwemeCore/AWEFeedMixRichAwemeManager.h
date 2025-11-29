@class NSMutableDictionary;

@interface AWEFeedMixRichAwemeManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *richIndexDict;

+ (id)sharedInstance;

- (void)handleRichAwemeForMixWithContext:(id)a0;
- (void)recordRichAwemeForMixWithItemID:(id)a0 currentIndex:(long long)a1;
- (void).cxx_destruct;

@end
