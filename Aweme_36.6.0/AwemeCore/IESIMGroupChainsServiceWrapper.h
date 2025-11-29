@class NSString, NSObject;
@protocol AWEIMGroupChainsService;

@interface IESIMGroupChainsServiceWrapper : NSProxy <AWEIMGroupChainsService>

@property (retain, nonatomic) NSObject<AWEIMGroupChainsService> *target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
