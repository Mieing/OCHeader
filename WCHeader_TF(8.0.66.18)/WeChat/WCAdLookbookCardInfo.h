@class WCAdLookbookBrandNewItem, NSArray, NSString, WCAdPagInfo, WCAdCardBtnInfo;

@interface WCAdLookbookCardInfo : NSObject <NSCoding, WCAdParserProtocol>

@property (retain, nonatomic) NSArray *lookbookCardList;
@property (retain, nonatomic) NSString *slideTitle;
@property (retain, nonatomic) NSString *slideJumpTitle;
@property (retain, nonatomic) WCAdCardBtnInfo *slideActionInfo;
@property (retain, nonatomic) WCAdPagInfo *themePagInfo;
@property (retain, nonatomic) WCAdPagInfo *slidePagInfo;
@property (nonatomic) double themeAnimDelay;
@property (retain, nonatomic) NSString *charmImageUrl;
@property (nonatomic) BOOL hideItemTitle;
@property (retain, nonatomic) WCAdLookbookBrandNewItem *brandNewItemInfo;

+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
