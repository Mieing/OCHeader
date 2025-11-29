@class NSString, NSMutableDictionary;

@interface AWEDetailCollectionPerformanceTrackeModel : NSObject

@property (copy, nonatomic) NSString *pageName;
@property (retain, nonatomic) NSMutableDictionary *eventBeginDictionary;
@property (retain, nonatomic) NSMutableDictionary *eventEndDictionary;

- (void)setTrackingPageName:(id)a0;
- (void)eventBegin:(id)a0;
- (void)eventEnd:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
