@class NSString;

@interface AWELynxUIElement : NSObject <BDXLynxElement>

@property (copy, nonatomic) NSString *lynxElementName;
@property (nonatomic) Class lynxElementClassName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)elementWithName:(id)a0 className:(id)a1;

- (void).cxx_destruct;

@end
