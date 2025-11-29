@class NSString;

@interface CAKLanguageManager : NSObject

@property (retain, nonatomic) NSString *currentLanguageCode;

+ (id)sharedInstance;

- (id)translatedStringForKey:(id)a0 defaultTranslation:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
