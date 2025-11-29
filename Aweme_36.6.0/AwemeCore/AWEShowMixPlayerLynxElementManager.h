@class NSMapTable;

@interface AWEShowMixPlayerLynxElementManager : NSObject

@property (retain, nonatomic) NSMapTable *elementTable;

+ (id)sharedInstance;

- (void)registElementView:(id)a0 withElementID:(id)a1;
- (id)elementViewWithElementID:(id)a0;
- (void)removeElementViewWithElementID:(id)a0;
- (void).cxx_destruct;

@end
