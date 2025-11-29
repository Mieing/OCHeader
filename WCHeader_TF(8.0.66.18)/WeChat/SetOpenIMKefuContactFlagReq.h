@class NSString;

@interface SetOpenIMKefuContactFlagReq : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *kfUsername;
@property (nonatomic) unsigned long long flagMask;
@property (nonatomic) unsigned long long flagValue;

+ (void)initialize;

@end
