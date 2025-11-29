@class NSSet, NSMutableDictionary, NSString;

@interface AWEPadFeedAutoPlayManagerFactory : NSObject <AWEFeedAutoPlayManagerFactory>

@property (retain, nonatomic) NSMutableDictionary *autoPlayManagerFeedTypeMap;
@property (nonatomic) BOOL allFeedApplyAutoPlay;
@property (retain, nonatomic) NSSet *blackList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (id)sharedFactory;

- (id)aAWEPadModuleAdapter;
- (id)autoPlayManagerWithReferString:(id)a0;
- (id)createAutoPlayManagerWithReferString:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
