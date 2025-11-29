@class NSString;

@interface HTSLiveInteractActingBG : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *tabName;
@property (copy, nonatomic) NSString *description_p;
@property (nonatomic) long long bgId;

+ (id)descriptor;

@end
