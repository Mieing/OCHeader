@class ACCRecordViewControllerInputData, ACCDRLynxView, AWEContextCenter, AWEVideoPublishViewModel, UIViewController;
@protocol ACCDRViewControllerProtocol;

@interface ACCDRContextImpl : NSObject <ACCDRContextProtocol>

@property (retain, nonatomic) AWEVideoPublishViewModel *model;
@property (retain, nonatomic) AWEContextCenter *context;
@property (weak, nonatomic) UIViewController<ACCDRViewControllerProtocol> *viewController;
@property (weak, nonatomic) ACCDRLynxView *lynxView;
@property (retain, nonatomic) ACCRecordViewControllerInputData *inputData;

- (void)addKey:(id)a0 withDealloc:(id)a1 handler:(id /* block */)a2;
- (void)addKey:(id)a0 withDealloc:(id)a1 BOOLhandler:(id /* block */)a2;
- (float)floatForKey:(id)a0;
- (void)setDouble:(double)a0 forKey:(id)a1;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (void)setString:(id)a0 forKey:(id)a1;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)setInteger:(long long)a0 forKey:(id)a1;
- (void)setArray:(id)a0 forKey:(id)a1;
- (id)dictionaryForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (void)setFloat:(float)a0 forKey:(id)a1;
- (BOOL)boolForKey:(id)a0;
- (long long)integerForKey:(id)a0;
- (id)arrayForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (double)doubleForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (void)setDictionary:(id)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forKey:(id)a1;

@end
