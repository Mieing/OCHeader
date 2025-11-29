@class NSString;

@interface WCMediaEcsInfo : NSObject <NSCoding, PBCoding>

@property (retain, nonatomic) NSString *productId;
@property (nonatomic) int bizType;
@property (retain, nonatomic) NSString *ecsJumpInfoBase64;
@property (retain, nonatomic) NSString *reportData;
@property (nonatomic) BOOL showDetailBtn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_productId;
+ (void)PBArrayAdd_bizType;
+ (void)PBArrayAdd_ecsJumpInfoBase64;
+ (void)PBArrayAdd_reportData;
+ (void)PBArrayAdd_showDetailBtn;
+ (void)initialize;
+ (id)fromXMLParentNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;

- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)toXML;
- (BOOL)isValid;
- (BOOL)canShowEntrance;
- (id)wording;
- (BOOL)isProduct;
- (void).cxx_destruct;

@end
