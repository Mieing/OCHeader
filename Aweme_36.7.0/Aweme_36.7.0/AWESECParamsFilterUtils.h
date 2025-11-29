@interface AWESECParamsFilterUtils : NSObject

+ (id)paramsTypeDict:(id)a0;
+ (id)filterParams:(id)a0 eventType:(id)a1;
+ (id)queryIncludeKeysByEventType:(id)a0;
+ (id)convertStringQueryValueToType:(id)a0;
+ (BOOL)isPrefixAllDigits:(id)a0 bits:(unsigned long long)a1;
+ (id)paramsFilterSettings;
+ (id)filterRuleByEventType:(id)a0;

@end
