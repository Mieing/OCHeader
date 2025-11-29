@class NSString, NSMutableSet, AWEAwemeModel;
@protocol AWECommerceComponentContext;

@interface AWEAdElementMonitorManager : NSObject <AWECommerceComponentProtocol>

@property (retain, nonatomic) AWEAwemeModel *aweModel;
@property (retain, nonatomic) NSMutableSet *elementSet;
@property (weak, nonatomic) id<AWECommerceComponentContext> commerceContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canShowComponentWithContext:(id)a0;

- (void)elementBlock:(id)a0;
- (void)elementMonitor:(id)a0;
- (id)allowElementList;
- (id)blockElementList;
- (void)setModel:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)willDisplay;

@end
