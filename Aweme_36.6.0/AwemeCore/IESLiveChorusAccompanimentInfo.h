@class IESLiveChorusAccompanist;

@interface IESLiveChorusAccompanimentInfo : IESLivePBBaseMessage

@property (nonatomic) int accompanimentType;
@property (retain, nonatomic) IESLiveChorusAccompanist *chorusAccompanist;
@property (nonatomic) BOOL hasChorusAccompanist;

+ (id)descriptor;

@end
