@class NSString;

@interface MMReferPartialInfo : NSObject

@property (retain, nonatomic) NSString *content;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } referRange;
@property (retain, nonatomic) NSString *prefixText;
@property (retain, nonatomic) NSString *referText;
@property (retain, nonatomic) NSString *suffixText;
@property (retain, nonatomic) NSString *referDisplayContent;
@property (nonatomic) BOOL isBlurFront;
@property (nonatomic) BOOL isBlurBehind;
@property (retain, nonatomic) NSString *frontBlurText;
@property (retain, nonatomic) NSString *behindBlurText;
@property (retain, nonatomic) NSString *displayingContent;
@property (retain, nonatomic) NSString *start;
@property (retain, nonatomic) NSString *end;
@property (nonatomic) int startIndex;
@property (nonatomic) int endIndex;
@property (retain, nonatomic) NSString *quoteMD5;
@property (nonatomic) BOOL isShowDisplayName;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } frontDisplayBlurRange;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } behindDisplayBlurRange;

+ (id)generateWithReferMsgWrap:(id)a0 referPartXML:(id)a1;
+ (id)generateWithReferMsgWrap:(id)a0 XMLNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a1;

- (id)initWithContent:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setBlurBehind:(BOOL)a0;
- (void)initPartialReferInfo;
- (void)parsePartialtextWithXMLNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (id)generatePartialtextXML;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })getReferRange;
- (BOOL)isPartialRefer;
- (void)initReferText;
- (id)getLastShowWordWithText:(id)a0;
- (id)getFirstShowWordWithText:(id)a0;
- (id)getReferTextPrefixWord;
- (id)getReferTextSuffixWord;
- (void)initReferDisplayContent;
- (id)referPartDisplayContent;
- (void).cxx_destruct;

@end
