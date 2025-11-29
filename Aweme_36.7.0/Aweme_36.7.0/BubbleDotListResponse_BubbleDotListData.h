@class NSMutableDictionary;

@interface BubbleDotListResponse_BubbleDotListData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableDictionary *panels;
@property (readonly, nonatomic) unsigned long long panels_Count;

+ (id)descriptor;

@end
