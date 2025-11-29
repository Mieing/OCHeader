@class MMKV;

@interface BDSCClarityUtils : NSObject

@property (class, readonly, nonatomic) MMKV *mmkvStore;

+ (BOOL)checkClarityIsLimited:(id)a0 inPlayItem:(id)a1;
+ (id)getDefaultClarity;
+ (void)setDefaultClarity:(id)a0;
+ (BOOL)containsLimitedClarityInClarityList:(id)a0;
+ (id)limitedClarityForPlayItem:(id)a0;
+ (id)clarityFrom:(id)a0 clarityList:(id)a1 reduced:(BOOL)a2;
+ (BOOL)checkClarityIsLimited:(id)a0;
+ (id)firstSupportedClarityForPlayItem:(id)a0 belowSize:(long long)a1;
+ (id)firstSupportedClarityForPlayItem:(id)a0 lessThanOrEqualToSize:(long long)a1;
+ (void)showClarityAlertWithDays:(long long)a0 frequency:(long long)a1 interval:(long long)a2 show:(id /* block */)a3 notShow:(id /* block */)a4;

@end
