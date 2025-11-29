@class IESLiveBackendRequestEntity, IESLivePreBackendRequestEntity, NSString, NSMutableArray;

@interface IESLivePreloadControlAdapter : NSObject <IESLivePreloadControlAdapter>

@property (retain, nonatomic) IESLiveBackendRequestEntity *backendEntity;
@property (retain, nonatomic) NSMutableArray *tempImpls;
@property (retain, nonatomic) IESLivePreBackendRequestEntity *preBackendEntity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)roomIDStrWithRoom:(id)a0;
+ (void)addBackendRequestClass:(id)a0 aClass:(Class)a1;

@end
