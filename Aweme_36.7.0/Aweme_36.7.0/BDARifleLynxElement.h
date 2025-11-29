@class NSString;

@interface BDARifleLynxElement : NSObject

@property (readonly, copy, nonatomic) NSString *elementName;
@property (readonly, nonatomic) Class elementClass;

- (id)initWithElementName:(id)a0 elementClass:(Class)a1;
- (void).cxx_destruct;

@end
