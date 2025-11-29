@class NSString, NSMapTable, UIView;
@protocol ACCOCFLayoutManagerProtocol;

@interface ACCOCFViewContainerImpl : NSObject <ACCOCFViewContainerProtocol>

@property (retain, nonatomic) id<ACCOCFLayoutManagerProtocol> layoutManager;
@property (weak, nonatomic) UIView *rootView;
@property (retain, nonatomic) NSMapTable *viewMapTable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)viewOfType:(unsigned long long)a0;
- (id)initWithLayoutManager:(id)a0;
- (void)assignRootView:(id)a0;
- (void)addView:(id)a0 forType:(unsigned long long)a1;
- (void).cxx_destruct;

@end
