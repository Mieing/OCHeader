@interface PayMenuReport : NSObject

+ (void)reportClickWithScene:(unsigned int)a0 RedDot:(unsigned int)a1 Url:(id)a2 WeappUserName:(id)a3;
+ (void)reportShowWithScene:(unsigned int)a0 RedDot:(unsigned int)a1 Url:(id)a2 WeappUserName:(id)a3;
+ (void)internalReportClickWithScene:(unsigned int)a0 RedDot:(unsigned int)a1 Url:(id)a2 WeappUserName:(id)a3 action:(unsigned int)a4;
+ (void)reportReddotExposure:(unsigned long long)a0;
+ (void)reportReddotClick:(unsigned long long)a0;

@end
