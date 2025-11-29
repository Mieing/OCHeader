@class NSString;

@interface AWEHPHambTabLottieChecker : NSObject <AWEHPHambCheckerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)checkModuleData:(id)a0;
+ (id)p_checkLottieData:(id)a0 lottieID:(id)a1;


@end
