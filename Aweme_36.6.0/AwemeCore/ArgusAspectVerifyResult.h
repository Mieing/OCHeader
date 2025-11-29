@class NSString, BDXThreadSafeDictionary;

@interface ArgusAspectVerifyResult : NSObject

@property (nonatomic) long long reasonCode;
@property (copy, nonatomic) NSString *reasonTrace;
@property (copy, nonatomic) BDXThreadSafeDictionary *extra;
@property (nonatomic) long long callingAspect;
@property (nonatomic) long long action;
@property (readonly, nonatomic) BOOL isBlock;
@property (readonly, nonatomic) BOOL isRewrite;
@property (readonly, nonatomic) BOOL isPass;
@property (copy, nonatomic) NSString *reason;

- (void)setAction:(long long)a0 reasonCode:(long long)a1 reason:(id)a2;
- (void)safeAddExtra:(id)a0 keyPrefix:(id)a1;
- (id)toDictonary;
- (id)toReportOnlyDictonary;
- (void)setBlock:(long long)a0 reason:(id)a1;
- (void)setRewrite:(long long)a0 reason:(id)a1;
- (void)setPass:(long long)a0 reason:(id)a1;
- (BOOL)isAbnormalResult;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)setBlock:(long long)a0;
- (void)setPass:(long long)a0;
- (id)actionString;
- (id)initWithAspectType:(long long)a0;
- (void)setRewrite:(long long)a0;

@end
