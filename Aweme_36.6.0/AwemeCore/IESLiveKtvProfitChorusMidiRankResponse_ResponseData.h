@class NSMutableArray, IESLiveChorusMidiRank;

@interface IESLiveKtvProfitChorusMidiRankResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *ranksArray;
@property (readonly, nonatomic) unsigned long long ranksArray_Count;
@property (retain, nonatomic) IESLiveChorusMidiRank *curUserRank;
@property (nonatomic) BOOL hasCurUserRank;

+ (id)descriptor;

@end
