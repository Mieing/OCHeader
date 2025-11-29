@class HTSLiveHighlightAreaPriorityConfig, HTSLiveCommon, NSMutableArray;

@interface HTSLiveNewHotGatherMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) NSMutableArray *hotWordListArray;
@property (readonly, nonatomic) unsigned long long hotWordListArray_Count;
@property (nonatomic) long long switchDuration;
@property (retain, nonatomic) HTSLiveHighlightAreaPriorityConfig *highlightAreaPriorityConfig;
@property (nonatomic) BOOL hasHighlightAreaPriorityConfig;

+ (id)descriptor;

@end
