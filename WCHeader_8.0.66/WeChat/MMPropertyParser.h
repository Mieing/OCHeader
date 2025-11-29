@interface MMPropertyParser : MMObject

+ (id)parsePropertyListForObj:(id)a0;
+ (BOOL)shouldParserIgnoreToken:(id)a0 forObj:(id)a1;
+ (Class)rootClass;
+ (id)parseProperty:(struct objc_property { } *)a0;

@end
