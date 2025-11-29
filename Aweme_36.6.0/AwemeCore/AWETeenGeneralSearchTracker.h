@interface AWETeenGeneralSearchTracker : NSObject

+ (id)showTypeWithCardType:(unsigned long long)a0;
+ (void)trackAuthorCardClickWithModel:(id)a0 enterFrom:(id)a1 showType:(id)a2 clickType:(id)a3 extra:(id)a4;
+ (void)trackAuthorCardShowWithModel:(id)a0 enterFrom:(id)a1 showType:(id)a2 extra:(id)a3;
+ (void)trackVideoCardShowWithModel:(id)a0 enterFrom:(id)a1 autoPlayEnable:(BOOL)a2 showType:(id)a3 extra:(id)a4;
+ (void)trackVideoCardClickWithModel:(id)a0 enterFrom:(id)a1 autoPlayEnable:(BOOL)a2 showType:(id)a3 clickType:(id)a4 extra:(id)a5;

@end
