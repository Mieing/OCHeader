@class NSString;

@interface HistoryMsgsInfo : NSObject

@property (retain, nonatomic) NSString *fromUsername;
@property (nonatomic) BOOL isInviter;
@property (nonatomic) unsigned long long historyId;
@property (retain, nonatomic) NSString *linkName;
@property (retain, nonatomic) NSString *titleName;
@property (retain, nonatomic) NSString *linkContent;
@property (retain, nonatomic) NSString *fileId;
@property (retain, nonatomic) NSString *aeskey;
@property (retain, nonatomic) NSString *fileMd5;
@property (nonatomic) unsigned int fileLength;
@property (nonatomic) unsigned int msgCount;
@property (retain, nonatomic) NSString *titleNameNew;
@property (retain, nonatomic) NSString *linkContentNew;
@property (retain, nonatomic) NSString *fileIdNew;
@property (retain, nonatomic) NSString *aeskeyNew;
@property (retain, nonatomic) NSString *fileMd5New;
@property (nonatomic) unsigned int fileLengthNew;
@property (nonatomic) unsigned int msgCountNew;

- (id)initWithLinkNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0 linkName:(id)a1 type:(id)a2;
- (void)parseLinkNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (void)parseNewLinkNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (BOOL)isValidate;
- (void)disableOldHistoryInfo;
- (BOOL)dontHaveFileID;
- (BOOL)justHaveOldFileID;
- (BOOL)justHaveNewFileID;
- (BOOL)haveBothFileID;
- (void).cxx_destruct;

@end
