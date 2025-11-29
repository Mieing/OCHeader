@class NSString, NSMutableArray, BaseResponse;

@interface WeVisEffectConfigResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *configList;
@property (retain, nonatomic) NSString *needRunScore;

+ (void)initialize;

- (void)setNeedRunScore:(id)a0;
- (id)needRunScore;
- (void)setConfigList:(id)a0;
- (id)configList;
- (void)setBaseResponse:(id)a0;
- (id)baseResponse;

@end
