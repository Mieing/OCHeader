@class NSString, NSMutableArray, IESLiveKtvProfitChorusRankResponse_Rank;

@interface IESLiveKtvProfitChorusRankResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *ranksArray;
@property (readonly, nonatomic) unsigned long long ranksArray_Count;
@property (retain, nonatomic) IESLiveKtvProfitChorusRankResponse_Rank *anchorInfo;
@property (nonatomic) BOOL hasAnchorInfo;
@property (copy, nonatomic) NSString *topLeftText;
@property (nonatomic) long long deltaTime;
@property (copy, nonatomic) NSString *topRightText;

+ (id)descriptor;

@end
