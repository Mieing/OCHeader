@interface ContactsCommon : NSObject

+ (void)initialize;
+ (id)parseContactKey:(id)a0;
+ (id)parseContactKey:(id)a0 chatRoom:(id)a1;
+ (void)fixContactFullPy:(id)a0;
+ (id)fixContactFullPyAndParseContactKey:(id)a0;
+ (BOOL)getContactVerifySwitchOpen;

@end
