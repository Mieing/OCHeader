@class IESGCPPBGameDetailSimpleEvaluationInfo, IESGCPPBGameDetailOfficialAccountInfo, NSMutableArray;

@interface IESGCPPBHeaderGameInfo : GPBMessage

@property (retain, nonatomic) IESGCPPBGameDetailOfficialAccountInfo *officialAccountInfo;
@property (nonatomic) BOOL hasOfficialAccountInfo;
@property (retain, nonatomic) NSMutableArray *pcConfigsArray;
@property (readonly, nonatomic) unsigned long long pcConfigsArray_Count;
@property (retain, nonatomic) IESGCPPBGameDetailSimpleEvaluationInfo *evaluationInfo;
@property (nonatomic) BOOL hasEvaluationInfo;

+ (id)descriptor;

@end
