@class NSMutableDictionary;

@interface ACCAdvanceEditResourceRegister : NSObject

@property (retain, nonatomic) NSMutableDictionary *resourceIdToPath;
@property (retain, nonatomic) NSMutableDictionary *resourceIdToEffect;

+ (id)sharedRegister;

- (void)registResourceId:(id)a0 effectModel:(id)a1;
- (id)pathForResourceId:(id)a0;
- (id)effectForResourceId:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
