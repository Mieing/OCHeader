@class NSString, NSMutableDictionary;

@interface WCMomentFinderInfo : NSObject <NSCoding, PBCoding>

@property (retain, nonatomic) NSMutableDictionary *sourceUrlQuery;
@property (retain, nonatomic) NSString *sourceUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_sourceUrl;
+ (void)initialize;
+ (id)fromXMLParentNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
+ (id)modelPropertyWhitelistForConfigTag:(id)a0;

- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)toXML;
- (BOOL)isFinderPreviewSource;
- (id)displayPreviewButtonTitle;
- (void).cxx_destruct;

@end
