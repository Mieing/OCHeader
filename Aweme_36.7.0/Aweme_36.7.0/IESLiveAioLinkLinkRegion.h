@class NSMutableDictionary;

@interface IESLiveAioLinkLinkRegion : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableDictionary *regions;
@property (readonly, nonatomic) unsigned long long regions_Count;

+ (id)descriptor;

@end
