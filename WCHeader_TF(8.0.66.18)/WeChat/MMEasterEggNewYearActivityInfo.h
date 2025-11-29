@class UIColor, NSString;

@interface MMEasterEggNewYearActivityInfo : MMEasterEggBaseActivityInfo

@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) NSString *backgroundLogoFilePath;
@property (retain, nonatomic) NSString *bottomMainTitle;
@property (retain, nonatomic) UIColor *bottomMainTitleColor;
@property (retain, nonatomic) NSString *bottomSubTitle;
@property (retain, nonatomic) UIColor *bottomSubTitleColor;
@property (retain, nonatomic) NSString *brandName;
@property (retain, nonatomic) NSString *brandLogoFilePath;
@property (retain, nonatomic) NSString *transitionLoadingFilePath;
@property (retain, nonatomic) UIColor *buttonBackgroundColor;
@property (retain, nonatomic) UIColor *buttonForegroundColor;
@property (retain, nonatomic) NSString *defaultButtonTitle;
@property (retain, nonatomic) NSString *defaultCoverFilePath;
@property (nonatomic) BOOL useLightStyle;

+ (id)activityNodeName;

- (Class)activityClass;
- (id)accessibilityLabel;
- (id)initWithActivityNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0 directoryPath:(id)a1 clientEggVersion:(unsigned long long)a2;
- (void)tryParseURLStringFromActivityNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0 directoryPath:(id)a1;
- (BOOL)isValid;
- (id)description;
- (void).cxx_destruct;

@end
