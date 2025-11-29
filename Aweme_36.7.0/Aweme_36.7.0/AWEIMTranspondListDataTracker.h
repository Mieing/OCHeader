@class NSArray, NSMutableSet;

@interface AWEIMTranspondListDataTracker : NSObject

@property (retain, nonatomic) NSMutableSet *trackDataSetM;
@property (copy, nonatomic) NSArray *dataList;

- (void)trackUserShowDataWithVisibleModels:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
