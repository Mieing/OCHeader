@class NSString, NSMapTable, IESECWinContext;

@interface IESECWinTabViewControllerManager : NSObject <IESECWinTabViewControllerManager> {
    IESECWinContext *_context;
}

@property (retain, nonatomic) NSMapTable *viewControllerMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createViewControllerWithModel:(id)a0;
- (BOOL)viewControllerExistWithModel:(id)a0;
- (id)getViewControllerWithTab:(id)a0;
- (void)updateViewControllerWithModel:(id)a0;
- (id)mapKey:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
