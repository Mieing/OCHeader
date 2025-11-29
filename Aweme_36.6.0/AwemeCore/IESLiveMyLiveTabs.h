@class NSString, NSMutableArray;

@interface IESLiveMyLiveTabs : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *defaultTab;
@property (retain, nonatomic) NSMutableArray *tabsArray;
@property (readonly, nonatomic) unsigned long long tabsArray_Count;

+ (id)descriptor;

@end
