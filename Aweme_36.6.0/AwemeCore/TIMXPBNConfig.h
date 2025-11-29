@class NSString;

@interface TIMXPBNConfig : GPBMessage

@property (copy, nonatomic) NSString *confName;
@property (nonatomic) BOOL hasConfName;
@property (copy, nonatomic) NSString *confValue;
@property (nonatomic) BOOL hasConfValue;

+ (id)descriptor;

- (id)confValue;
- (id)confName;

@end
