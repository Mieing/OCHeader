@class NSMutableDictionary;

@interface HTSLiveHighlightAreaContainer_Trigger : IESLivePBBaseMessage

@property (nonatomic) long long event;
@property (retain, nonatomic) NSMutableDictionary *extra;
@property (readonly, nonatomic) unsigned long long extra_Count;

+ (id)descriptor;

@end
