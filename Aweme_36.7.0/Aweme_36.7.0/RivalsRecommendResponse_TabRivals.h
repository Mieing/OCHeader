@class GPBInt64ObjectDictionary, NSString, Tab, NSMutableArray;

@interface RivalsRecommendResponse_TabRivals : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *rivalsArray;
@property (readonly, nonatomic) unsigned long long rivalsArray_Count;
@property (retain, nonatomic) Tab *tab;
@property (nonatomic) BOOL hasTab;
@property (retain, nonatomic) GPBInt64ObjectDictionary *groupRivals;
@property (readonly, nonatomic) unsigned long long groupRivals_Count;
@property (nonatomic) int defaultGroup;
@property (copy, nonatomic) NSString *subRecommendTitle;

+ (id)descriptor;

@end
