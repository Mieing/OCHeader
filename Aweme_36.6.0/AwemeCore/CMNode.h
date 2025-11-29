@class NSString, NSURL;

@interface CMNode : NSObject {
    BOOL _freeWhenDone;
}

@property (readonly) struct cmark_node { } *node;
@property (readonly) CMNode *next;
@property (readonly) CMNode *previous;
@property (readonly) CMNode *parent;
@property (readonly) CMNode *firstChild;
@property (readonly) CMNode *lastChild;
@property (readonly) long long type;
@property (readonly) NSString *humanReadableType;
@property (readonly) NSString *stringValue;
@property (readonly) long long headerLevel;
@property (readonly) NSString *fencedCodeInfo;
@property (readonly) long long listType;
@property (readonly) long long listDelimeterType;
@property (readonly) long long listStartingNumber;
@property (readonly) BOOL listTight;
@property (readonly) NSString *URLString;
@property (readonly) NSURL *URL;
@property (readonly) NSString *title;
@property (readonly) long long startLine;
@property (readonly) long long startColumn;
@property (readonly) long long endLine;
@property (readonly) long long endColumn;

- (id)initWithNode:(struct cmark_node { } *)a0 freeWhenDone:(BOOL)a1;
- (id)description;
- (id)init;
- (id)iterator;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)dealloc;

@end
