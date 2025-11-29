@class NSString, NSMutableArray, HTSLiveUser;

@interface HTSLiveLinkmicThemedCompetitionBannerMessageForPC_BannerContent : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) HTSLiveUser *currentPerformer;
@property (nonatomic) BOOL hasCurrentPerformer;
@property (nonatomic) long long rank;
@property (nonatomic) long long totalPerformerCount;
@property (nonatomic) int status;
@property (retain, nonatomic) NSMutableArray *rotateContentArray;
@property (readonly, nonatomic) unsigned long long rotateContentArray_Count;
@property (nonatomic) long long version;

+ (id)descriptor;

@end
