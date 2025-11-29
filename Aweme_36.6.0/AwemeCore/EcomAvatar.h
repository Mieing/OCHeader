@class NSString;

@interface EcomAvatar : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *URL;
@property (nonatomic) long long width;
@property (nonatomic) long long height;

+ (id)descriptor;

@end
