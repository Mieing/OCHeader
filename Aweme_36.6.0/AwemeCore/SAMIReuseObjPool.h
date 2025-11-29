@class NSLock, NSMutableDictionary;
@protocol SAMIReuseObjConstructProtocol;

@interface SAMIReuseObjPool : NSObject

@property (retain, nonatomic) NSMutableDictionary *usingPool;
@property (retain, nonatomic) NSMutableDictionary *freePool;
@property (retain, nonatomic) NSLock *lock;
@property (weak, nonatomic) id<SAMIReuseObjConstructProtocol> constructor;

- (void)registReuseIdentify:(id)a0;
- (id)applyReuseObjForIdentify:(id)a0;
- (void)releaseReuseObj:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
