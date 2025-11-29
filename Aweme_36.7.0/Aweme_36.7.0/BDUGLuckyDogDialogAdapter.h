@class NSString, NSMutableArray;

@interface BDUGLuckyDogDialogAdapter : NSObject <BDUGLuckyDogDialogProtocol>

@property (retain, nonatomic) NSMutableArray *dialogObjMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)serviceProtocol;

- (void)enqueuePopUp:(id)a0 params:(id)a1 withShowBlock:(id /* block */)a2;
- (void)finishPopUp:(id)a0;
- (id)containerIDFromDialogObject:(id)a0;
- (id)removeDialogFromMapWithKey:(void *)a0;
- (void).cxx_destruct;
- (id)containerID;
- (id)init;

@end
