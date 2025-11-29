@class NSString, NamedNodeMap;

@interface DocumentType : Node

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NamedNodeMap *entities;
@property (readonly, nonatomic) NamedNodeMap *notations;
@property (readonly, nonatomic) NSString *publicId;
@property (readonly, nonatomic) NSString *systemId;
@property (readonly, nonatomic) NSString *internalSubset;

- (void).cxx_destruct;

@end
