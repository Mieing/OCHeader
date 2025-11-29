@class CMDocument;

@interface CMHTMLRenderer : NSObject {
    CMDocument *_document;
}

- (void).cxx_destruct;
- (id)initWithDocument:(id)a0;
- (id)render;

@end
