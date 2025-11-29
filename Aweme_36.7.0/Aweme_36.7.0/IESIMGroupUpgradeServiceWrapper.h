@class NSString, NSObject;
@protocol IESIMGroupUpgradeService;

@interface IESIMGroupUpgradeServiceWrapper : NSProxy <IESIMGroupUpgradeService>

@property (retain, nonatomic) NSObject<IESIMGroupUpgradeService> *target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
