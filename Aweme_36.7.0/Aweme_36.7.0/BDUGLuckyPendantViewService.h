@class NSString, NSMutableDictionary;

@interface BDUGLuckyPendantViewService : NSObject <BDUGLuckyPendantViewServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *pendantClassDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceProtocol;

- (void)registerPendantViewClass:(Class)a0;
- (id)createPendantWithPendantStyle:(id)a0 pendantContext:(id)a1 delegate:(id)a2;
- (void).cxx_destruct;

@end
