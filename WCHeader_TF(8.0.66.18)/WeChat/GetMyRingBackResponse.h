@class ExtRingBackDetail, BaseResponse;

@interface GetMyRingBackResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) ExtRingBackDetail *extRingBackDetail;
@property (nonatomic) BOOL isShowEnableCallerListenMyRingBackSwitch;

+ (void)initialize;

- (void)setIsShowEnableCallerListenMyRingBackSwitch:(BOOL)a0;
- (BOOL)isShowEnableCallerListenMyRingBackSwitch;
- (void)setExtRingBackDetail:(id)a0;
- (id)extRingBackDetail;
- (void)setBaseResponse:(id)a0;
- (id)baseResponse;

@end
