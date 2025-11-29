@class NSMutableArray;

@interface WCFinderPostPrevDataModel : NSObject

@property (retain, nonatomic) NSMutableArray *usualTopicsArray;

- (id)initWithPrevDataResponse:(id)a0;
- (void)_filterValidTopics:(id)a0;
- (id)filterUsualTopicFromPreMatchString:(id)a0;
- (void).cxx_destruct;

@end
