@class NSArray, NSString;

@interface IESVSExtensionAreaServiceImpl : NSObject <IESVSExtensionAreaCacheService>

@property (nonatomic) unsigned long long capacity;
@property (nonatomic) unsigned long long timesAgeing;
@property (retain, nonatomic) NSArray *cacheArr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)initParams;
- (id)currentCacheArray;
- (void).cxx_destruct;
- (id)init;

@end
