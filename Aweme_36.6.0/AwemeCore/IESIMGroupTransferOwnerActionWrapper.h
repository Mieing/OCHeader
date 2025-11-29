@class NSString, NSObject;
@protocol IESIMGroupTransferOwnerAction;

@interface IESIMGroupTransferOwnerActionWrapper : NSProxy <IESIMGroupTransferOwnerAction>

@property (retain, nonatomic) NSObject<IESIMGroupTransferOwnerAction> *target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
