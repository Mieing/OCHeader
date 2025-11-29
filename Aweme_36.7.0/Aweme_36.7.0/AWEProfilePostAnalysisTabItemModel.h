@class NSString;

@interface AWEProfilePostAnalysisTabItemModel : NSObject

@property (nonatomic) unsigned long long tabType;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long count;
@property (nonatomic) BOOL showCount;
@property (copy, nonatomic) NSString *schema;

- (void).cxx_destruct;

@end
