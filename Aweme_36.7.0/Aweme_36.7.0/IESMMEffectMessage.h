@class NSString;

@interface IESMMEffectMessage : NSObject

@property (nonatomic) long long type;
@property (nonatomic) long long msgId;
@property (nonatomic) long long arg1;
@property (nonatomic) long long arg2;
@property (retain, nonatomic) NSString *arg3;

+ (id)messageWithSonicEffectMessage:(id)a0;
+ (id)messageWithType:(long long)a0;
+ (id)messageWithKryptonEffectMessage:(id)a0;

- (void).cxx_destruct;
- (id)init;

@end
