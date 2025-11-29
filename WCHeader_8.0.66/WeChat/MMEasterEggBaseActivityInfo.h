@class NSArray, NSString;

@interface MMEasterEggBaseActivityInfo : NSObject <MMEasterEggActivityInfo>

@property (retain, nonatomic) NSArray *frames;
@property (retain, nonatomic) NSString *imageFilePath;
@property (nonatomic) int size;
@property (nonatomic) long long animationType;
@property (retain, nonatomic) NSString *appId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activityNodeName;

- (Class)activityClass;
- (id)accessibilityLabel;
- (id)initWithActivityNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0 directoryPath:(id)a1 clientEggVersion:(unsigned long long)a2;
- (void)tryParseAppIdFromActivityNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (void)tryParseEntryAnimTypeNodeFromActivityNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0 directoryPath:(id)a1 clientEggVersion:(unsigned long long)a2;
- (BOOL)isValid;
- (BOOL)supportInteractiveImplicitView;
- (void)asyncPrepareInteractiveImplicitViewWithCompletionHandler:(id /* block */)a0;
- (id)interactiveImplicitView;
- (void)asyncGetFramesWithCompletionHandler:(id /* block */)a0;
- (id)generateInteractiveImplicitView:(id)a0;
- (void).cxx_destruct;

@end
