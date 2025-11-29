@class NSArray, NSMapTable;

@interface HunterLynxElementManager : NSObject

@property (retain, nonatomic) NSMapTable *hunterElementTable;
@property (retain, nonatomic) NSMapTable *hunterContainerTable;
@property (copy, nonatomic) NSArray *customUIElements;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (id)customerComponentKeyClassPairToRegister;
- (id)bdxlynxElementWithRegisterName:(id)a0 elementClass:(Class)a1;
- (void)registElementView:(id)a0 withElementID:(id)a1;
- (void)registElementView:(id)a0 forContainerID:(id)a1;
- (id)elementViewWithElementID:(id)a0;
- (void)removeElementViewWithElementID:(id)a0;
- (id)elementsForCustomerComponentKeyClassPairToRegister:(id)a0;
- (id)elementViewsWithContainerID:(id)a0;
- (void)removeElementViewsWithContainerID:(id)a0;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
