@class NSCharacterSet;

@interface BTDURLComponentsUtils : NSObject

@property (class, readonly, nonatomic) NSCharacterSet *URLPathAllowedCharacterSet;

+ (id)getSchemeInURLString:(id)a0;
+ (BOOL)isValidScheme:(id)a0;
+ (void)initialize;

@end
