@class NSDictionary;

@interface QTCJSONValueTransformer : NSObject

@property (readonly, nonatomic) NSDictionary *primitivesNames;

+ (Class)classByResolvingClusterClasses:(Class)a0;

- (id)init;
- (id)NSMutableStringFromNSString:(id)a0;
- (id)NSMutableArrayFromNSArray:(id)a0;
- (id)NSMutableDictionaryFromNSDictionary:(id)a0;
- (id)NSSetFromNSArray:(id)a0;
- (id)NSMutableSetFromNSArray:(id)a0;
- (id)JSONObjectFromNSSet:(id)a0;
- (id)JSONObjectFromNSMutableSet:(id)a0;
- (id)BOOLFromNSNumber:(id)a0;
- (id)BOOLFromNSString:(id)a0;
- (id)JSONObjectFromBOOL:(id)a0;
- (float)floatFromObject:(id)a0;
- (float)floatFromNSString:(id)a0;
- (float)floatFromNSNumber:(id)a0;
- (id)NSNumberFromfloat:(float)a0;
- (id)NSNumberFromNSString:(id)a0;
- (id)NSStringFromNSNumber:(id)a0;
- (id)NSDecimalNumberFromNSString:(id)a0;
- (id)NSStringFromNSDecimalNumber:(id)a0;
- (id)NSURLFromNSString:(id)a0;
- (id)JSONObjectFromNSURL:(id)a0;
- (id)importDateFormatter;
- (id)__NSDateFromNSString:(id)a0;
- (id)__JSONObjectFromNSDate:(id)a0;
- (id)NSDateFromNSNumber:(id)a0;
- (id)NSTimeZoneFromNSString:(id)a0;
- (id)JSONObjectFromNSTimeZone:(id)a0;
- (id)__NSDictionaryFromNSArray:(id)a0;
- (id)__NSMutableDictionaryFromNSArray:(id)a0;
- (void).cxx_destruct;

@end
