@interface HTSLiveCommentSpecialEffectData_TimeRange : IESLivePBBaseMessage

@property (nonatomic) long long startOffset;
@property (nonatomic) long long endOffset;

+ (id)descriptor;

@end
