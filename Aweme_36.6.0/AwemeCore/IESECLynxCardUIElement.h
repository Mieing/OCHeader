@class NSString;

@interface IESECLynxCardUIElement : NSObject <HybridLynxElement, BDXLynxElement>

@property (copy, nonatomic) NSString *lynxElementName;
@property (nonatomic) Class lynxElementClassName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
