@interface HTSLiveOnlyTaSegment : IESLivePBBaseMessage

@property (nonatomic) long long startOffset;
@property (nonatomic) long long stopOffset;

+ (id)descriptor;

@end
