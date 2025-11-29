@class IESLiveChorusAccompanimentInfo;

@interface HTSLiveChorusAccompanimentInfoContent : IESLivePBBaseMessage

@property (nonatomic) long long chorusId;
@property (retain, nonatomic) IESLiveChorusAccompanimentInfo *chorusAccompanimentInfo;
@property (nonatomic) BOOL hasChorusAccompanimentInfo;

+ (id)descriptor;

@end
