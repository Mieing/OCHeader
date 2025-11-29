@class SVGElement, SVGElementInstanceList;

@interface SVGElementInstance : NSObject

@property (weak, nonatomic) SVGElement *correspondingElement;
@property (retain, nonatomic) SVGElementInstance *parentNode;
@property (retain, nonatomic) SVGElementInstanceList *childNodes;
@property (readonly, nonatomic) SVGElementInstance *firstChild;
@property (readonly, nonatomic) SVGElementInstance *lastChild;
@property (readonly, nonatomic) SVGElementInstance *previousSibling;
@property (readonly, nonatomic) SVGElementInstance *nextSibling;

- (void).cxx_destruct;
- (void)dealloc;

@end
