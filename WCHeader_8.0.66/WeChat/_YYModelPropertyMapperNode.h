@class _YYModelPropertyMeta;

@interface _YYModelPropertyMapperNode : NSObject {
    void *_tag;
    _YYModelPropertyMeta *_propertyMeta;
    BOOL _isXmlAttribute;
    _YYModelPropertyMapperNode *_firstChildNode;
    _YYModelPropertyMapperNode *_nextSibling;
    id /* block */ _preProcess;
    id /* block */ _customFromXMLProcess;
    id /* block */ _customToXMLProcess;
}

@property (weak, nonatomic) _YYModelPropertyMapperNode *parentNode;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
