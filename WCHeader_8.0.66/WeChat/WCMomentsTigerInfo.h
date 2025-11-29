@class NSString, WCFinderLiveShareItem;

@interface WCMomentsTigerInfo : NSObject <NSCoding, PBCoding>

@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL sourceEnabled;
@property (retain, nonatomic) WCFinderLiveShareItem *finderLiveItem;
@property (readonly, copy, nonatomic) NSString *finderLiveSourceName;
@property (nonatomic) long long enterFinderLiveMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_enabled;
+ (void)PBArrayAdd_sourceEnabled;
+ (void)PBArrayAdd_finderLiveItem;
+ (void)PBArrayAdd_enterFinderLiveMode;
+ (void)initialize;
+ (id)fromXMLParentNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;

- (id)getPBPropertyTable;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)toXML;
- (void).cxx_destruct;

@end
