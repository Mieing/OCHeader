@class NSString, NSArray, NSData;

@interface WCNoteInfo : NSObject <WCContentShareable, PBCoderNSCodingBridge>

@property (nonatomic) int favLocalId;
@property (nonatomic) int editTime;
@property (retain, nonatomic) NSString *editUsr;
@property (nonatomic) int fromScene;
@property (retain, nonatomic) NSArray *dataList;
@property (retain, nonatomic) NSData *dataListNSCodingData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_favLocalId;
+ (void)PBArrayAdd_editTime;
+ (void)PBArrayAdd_editUsr;
+ (void)PBArrayAdd_dataListNSCodingData;
+ (void)initialize;
+ (BOOL)isSupport:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
+ (id)xmlTag;
+ (id)dataListFromXmlNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
+ (id)XmlOfNoteInfoDataList:(id)a0;

- (id)getPBPropertyTable;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)beforePBCoderProcess;
- (void)afterPBCoderProcess;
- (id)toXML;
- (void).cxx_destruct;

@end
