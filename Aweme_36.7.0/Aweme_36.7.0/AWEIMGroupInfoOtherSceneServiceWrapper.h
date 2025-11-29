@class NSString, NSObject;
@protocol AWEIMGroupInfoOtherSceneService;

@interface AWEIMGroupInfoOtherSceneServiceWrapper : NSProxy <AWEIMGroupInfoOtherSceneService>

@property (retain, nonatomic) NSObject<AWEIMGroupInfoOtherSceneService> *target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
