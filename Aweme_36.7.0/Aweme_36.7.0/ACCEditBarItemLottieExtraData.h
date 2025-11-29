@class NSString;

@interface ACCEditBarItemLottieExtraData : ACCEditBarItemExtraData

@property (nonatomic) BOOL isLottie;
@property (copy, nonatomic) NSString *lottieResourceName;

- (id)initWithButtonClass:(Class)a0 type:(unsigned long long)a1 isLottie:(BOOL)a2 lottieResourceName:(id)a3;
- (void).cxx_destruct;

@end
