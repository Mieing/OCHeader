@class NSString;

@interface HTSLiveAvatarPhone : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *phone;
@property (nonatomic) float start;
@property (nonatomic) float end;

+ (id)descriptor;

@end
