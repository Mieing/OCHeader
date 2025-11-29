@class NSString;

@interface OriginalLanguageInfoV2 : GPBMessage

@property (nonatomic) BOOL canTranslateRealtime;
@property (nonatomic) BOOL hasCanTranslateRealtime;
@property (copy, nonatomic) NSString *languageCode;
@property (nonatomic) BOOL hasLanguageCode;
@property (nonatomic) int languageId;
@property (nonatomic) BOOL hasLanguageId;
@property (copy, nonatomic) NSString *lang;
@property (nonatomic) BOOL hasLang;

+ (id)descriptor;

@end
