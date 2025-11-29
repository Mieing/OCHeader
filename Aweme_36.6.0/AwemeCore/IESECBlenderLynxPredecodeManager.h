@class NSMutableDictionary, IESECBlenderContext, NSString, NSLock;

@interface IESECBlenderLynxPredecodeManager : NSObject <IESECBlenderLynxPredecodeManager>

@property (retain, nonatomic) NSLock *lock;
@property (retain, nonatomic) NSMutableDictionary *bundleDict;
@property (weak, nonatomic) IESECBlenderContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)saveTemplateBundle:(id)a0 withBundle:(id)a1;
- (void)predecodeWith:(id)a0 withKey:(id)a1 completion:(id /* block */)a2;
- (id)safeGetTemplateBundelByUrl:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
