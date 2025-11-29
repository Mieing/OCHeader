@class NSString, WCFinderLiveShareItem;

@interface WCMomentsDragonInfo : NSObject <NSCoding, PBCoding>

@property (nonatomic) BOOL enabled;
@property (readonly, nonatomic) long long contentStyle;
@property (nonatomic) long long postSource;
@property (retain, nonatomic) WCFinderLiveShareItem *finderLiveItem;
@property (retain, nonatomic) WCFinderLiveShareItem *specifiedFinderLiveItem;
@property (readonly, copy, nonatomic) NSString *finderLiveSourceName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_enabled;
+ (void)PBArrayAdd_finderLiveItem;
+ (void)PBArrayAdd_postSource;
+ (void)initialize;
+ (id)fromXMLParentNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;

- (id)getPBPropertyTable;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)toXML;
- (void).cxx_destruct;

@end
