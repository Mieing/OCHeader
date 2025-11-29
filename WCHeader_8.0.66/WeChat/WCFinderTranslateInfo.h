@class NSString;

@interface WCFinderTranslateInfo : NSObject

@property (copy, nonatomic) NSString *originText;
@property (nonatomic) unsigned long long clientID;
@property (copy, nonatomic) NSString *translatedText;
@property (copy, nonatomic) NSString *translatedLang;
@property (copy, nonatomic) NSString *brandWording;

- (void).cxx_destruct;

@end
