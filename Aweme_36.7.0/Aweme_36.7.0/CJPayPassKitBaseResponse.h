@class CJPayErrorButtonInfo;

@interface CJPayPassKitBaseResponse : CJPayBaseResponse

@property (retain, nonatomic) CJPayErrorButtonInfo *buttonInfo;

+ (id)keyMapper;
+ (id)basicDict;

- (void).cxx_destruct;
- (BOOL)isSuccess;

@end
