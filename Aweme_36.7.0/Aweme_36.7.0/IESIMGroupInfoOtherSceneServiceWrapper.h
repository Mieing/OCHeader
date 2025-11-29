@class NSString, NSObject;
@protocol IESIMGroupInfoOtherSceneService;

@interface IESIMGroupInfoOtherSceneServiceWrapper : NSProxy <IESIMGroupInfoOtherSceneService>

@property (retain, nonatomic) NSObject<IESIMGroupInfoOtherSceneService> *target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
