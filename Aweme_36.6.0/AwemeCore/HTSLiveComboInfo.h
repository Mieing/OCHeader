@interface HTSLiveComboInfo : IESLivePBBaseMessage

@property (nonatomic) long long comboSeq;
@property (nonatomic) long long comboOrder;

+ (id)descriptor;

@end
