@interface HTSLiveGroupLiveData : IESLivePBBaseMessage

@property (nonatomic) long long isGroupLive;
@property (nonatomic) int groupLiveMode;

+ (id)descriptor;

@end
