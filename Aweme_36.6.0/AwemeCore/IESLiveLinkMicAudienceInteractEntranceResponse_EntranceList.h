@class NSMutableArray;

@interface IESLiveLinkMicAudienceInteractEntranceResponse_EntranceList : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *listArray;
@property (readonly, nonatomic) unsigned long long listArray_Count;
@property (nonatomic) long long rotateCycleSec;
@property (nonatomic) float animationDuration;

+ (id)descriptor;

@end
