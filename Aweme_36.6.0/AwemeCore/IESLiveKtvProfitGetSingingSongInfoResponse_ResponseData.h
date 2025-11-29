@class NSString, NSMutableArray;

@interface IESLiveKtvProfitGetSingingSongInfoResponse_ResponseData : IESLivePBBaseMessage

@property (nonatomic) long long songId;
@property (copy, nonatomic) NSString *foldingInfo;
@property (copy, nonatomic) NSString *lyricInfo;
@property (retain, nonatomic) NSMutableArray *musicClimaxArray;
@property (readonly, nonatomic) unsigned long long musicClimaxArray_Count;
@property (nonatomic) long long source;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *taggingInfo;
@property (nonatomic) long long sameGroupIdV3;
@property (nonatomic) long long simGroupIdV3;
@property (nonatomic) BOOL isFilter;
@property (nonatomic) BOOL isNonVocal;
@property (copy, nonatomic) NSString *fontInfo;

+ (id)descriptor;

@end
