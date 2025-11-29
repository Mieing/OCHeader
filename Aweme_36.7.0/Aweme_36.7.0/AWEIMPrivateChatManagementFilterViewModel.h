@class NSDictionary, NSArray;

@interface AWEIMPrivateChatManagementFilterViewModel : NSObject

@property (copy, nonatomic) NSDictionary *titleStringDict;
@property (nonatomic) unsigned long long selectTabCount;
@property (nonatomic) unsigned long long selectType;
@property (retain, nonatomic) NSArray *supportFeature;
@property (copy, nonatomic) NSArray *cellModelList;

- (void)switchTabWithType:(unsigned long long)a0;
- (id)__constructCellModelList;
- (void).cxx_destruct;
- (id)init;

@end
