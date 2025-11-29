@class NSArray, AWEShareContext;

@interface AWEIMShareMutiselectViewControllerDataSourceConfig : NSObject

@property (retain, nonatomic) AWEShareContext *shareContext;
@property (copy, nonatomic) NSArray *shareModels;
@property (copy, nonatomic) NSArray *dataList;
@property (copy, nonatomic) NSArray *recentSharedInfoModels;
@property (copy, nonatomic) NSArray *recentSharedList;

- (void).cxx_destruct;

@end
