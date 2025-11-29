@class NSString, NSArray, NSDictionary, AWEIMAssembleTextUIContextModel, NSAttributedString;

@interface AWEIMLinkTextUtility : NSObject

@property (copy, nonatomic) NSString *originText;
@property (retain, nonatomic) NSArray *templateArray;
@property (copy, nonatomic) NSDictionary *templateActions;
@property (copy, nonatomic) NSString *result;
@property (retain, nonatomic) AWEIMAssembleTextUIContextModel *context;
@property (retain, nonatomic) NSArray *linkArray;
@property (retain, nonatomic) NSArray *iconArray;
@property (copy, nonatomic) NSString *conversationID;
@property (nonatomic) BOOL isUsedInRefactorCell;
@property (copy, nonatomic) NSArray *linkTemplateArray;
@property (copy, nonatomic) NSAttributedString *assembledText;

+ (id)analyzeRawLinkForText:(id)a0;
+ (BOOL)hasUnrecognizedActionWithTemplate:(id)a0;
+ (id)assembleAttributedString:(id)a0 withTemplateArray:(id)a1 textFeature:(unsigned long long)a2;
+ (id)iesim_assembleAttributedString:(id)a0 withTemplateArray:(id)a1 textFeature:(unsigned long long)a2;
+ (id)textLinkMessageUtilityWithOriginText:(id)a0 templateActions:(id)a1;
+ (id)attrbuteStringForText:(id)a0 withContext:(id)a1;
+ (void)highlightTextLink:(id)a0 withLinkArray:(id)a1 withContext:(id)a2;
+ (void)highlightLinkAndPhone:(id)a0 withLinkArray:(id)a1 withContext:(id)a2;
+ (id)__matchText:(id)a0 withPattern:(id)a1 type:(long long)a2;
+ (id)highlightTextColorWithContext:(id)a0;
+ (id)highlightClickColorWithContext:(id)a0;
+ (id)analyzeRawLinkAndNumberForText:(id)a0;
+ (id)contentAttributes;

- (id)initWithOriginText:(id)a0 templateArray:(id)a1;
- (void)analyzeForNoticeMessage;
- (id)initWithOriginText:(id)a0 templateActions:(id)a1;
- (void)analyzeForTextLinkMessage;
- (void)analyzeForTextMessage;
- (void)assembleAttributeStringAndActionWithContext:(id)a0 useOriginText:(BOOL)a1;
- (void)analyzeForTextLinkWithTextColor:(id)a0;
- (void)p_matchPattern:(id)a0 storeInLinkArray:(id)a1 type:(long long)a2;
- (id)p_regularExpressionWithPattern:(id)a0;
- (void).cxx_destruct;

@end
