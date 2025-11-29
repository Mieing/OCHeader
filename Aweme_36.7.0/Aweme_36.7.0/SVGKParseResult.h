@class SVGSVGElement, NSMutableDictionary, SVGDocument, NSMutableArray;

@interface SVGKParseResult : NSObject

@property (retain, nonatomic) NSMutableArray *warnings;
@property (retain, nonatomic) NSMutableArray *errorsRecoverable;
@property (retain, nonatomic) NSMutableArray *errorsFatal;
@property (nonatomic) BOOL libXMLFailed;
@property (nonatomic) double parseProgressFractionApproximate;
@property (retain, nonatomic) SVGSVGElement *rootOfSVGTree;
@property (retain, nonatomic) SVGDocument *parsedDocument;
@property (retain, nonatomic) NSMutableDictionary *namespacesEncountered;

- (void)addSourceError:(id)a0;
- (void)addParseErrorFatal:(id)a0;
- (void)addSAXError:(id)a0;
- (void)addParseWarning:(id)a0;
- (void)addParseErrorRecoverable:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
