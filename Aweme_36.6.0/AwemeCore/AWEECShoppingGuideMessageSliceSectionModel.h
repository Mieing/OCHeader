@class NSString;

@interface AWEECShoppingGuideMessageSliceSectionModel : AWEECShoppingGuideMessageSectionModel

@property (copy, nonatomic) NSString *cardId;
@property (nonatomic) unsigned long long cardType;
@property (copy, nonatomic) NSString *cardData;
@property (copy, nonatomic) NSString *templateName;
@property (copy, nonatomic) NSString *templateVersion;
@property (copy, nonatomic) NSString *templateData;
@property (copy, nonatomic) NSString *leadingText;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
