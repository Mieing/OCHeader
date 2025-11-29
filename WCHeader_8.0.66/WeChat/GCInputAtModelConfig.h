@class NSString, MMGrowTextView;

@interface GCInputAtModelConfig : NSObject

@property (retain, nonatomic) NSString *contentId;
@property (nonatomic) unsigned int pageLimit;
@property (weak, nonatomic) MMGrowTextView *growTextView;

- (void).cxx_destruct;

@end
