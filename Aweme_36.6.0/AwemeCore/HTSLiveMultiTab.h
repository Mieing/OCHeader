@class NSString, NSMutableArray;

@interface HTSLiveMultiTab : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *tabTitleColor;
@property (retain, nonatomic) NSMutableArray *tabsArray;
@property (readonly, nonatomic) unsigned long long tabsArray_Count;
@property (nonatomic) int switchOn;
@property (nonatomic) int disableBackground;
@property (nonatomic) int disableProject;

+ (id)descriptor;

@end
