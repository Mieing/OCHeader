@class Element, DocumentType;

@interface Document : Node

@property (retain, nonatomic) Element *documentElement;
@property (readonly, nonatomic) DocumentType *doctype;

- (void).cxx_destruct;
- (id)getElementsByTagName:(id)a0;
- (id)createElement:(id)a0;
- (id)createDocumentFragment;
- (id)createElementNS:(id)a0 qualifiedName:(id)a1;
- (id)createProcessingInstruction:(id)a0 data:(id)a1;
- (id)createAttribute:(id)a0;
- (id)getElementsByTagNameNS:(id)a0 localName:(id)a1;
- (id)getElementById:(id)a0;

@end
