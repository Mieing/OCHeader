@class NSString, NSObject;
@protocol IESIMGroupPushCoordinatorProtocol;

@interface IESIMGroupPushCoordinatorWrapper : NSProxy <IESIMGroupPushCoordinatorProtocol>

@property (retain, nonatomic) NSObject<IESIMGroupPushCoordinatorProtocol> *target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
