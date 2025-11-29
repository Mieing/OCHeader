@class NSLocale;

@interface BDPI18NConfiguration : NSObject

@property (retain, nonatomic) NSLocale *locale;
@property (nonatomic) BOOL isRightToLeft;

+ (id)defaultConfiguration;

@end
