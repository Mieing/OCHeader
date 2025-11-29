@class NSLock, NSMutableDictionary;

@interface IESDPBManager : NSObject

@property (retain, nonatomic) NSLock *lock;
@property (retain, nonatomic) NSMutableDictionary *adaptorRegisters;

+ (id)sharedInstance;

- (id)registerAdaptorForBusiness:(id)a0;
- (id)getAdaptorForBusiness:(id)a0;
- (id)getDefaultAdaptor;
- (void)clearAdaptorForBusiness:(id)a0;
- (id)allBiz;
- (void).cxx_destruct;
- (id)init;

@end
