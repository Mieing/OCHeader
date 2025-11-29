@class NSString, NSObject;
@protocol IESIMGroupApplyJoinInterface;

@interface IESIMGroupApplyJoinWrapper : NSProxy <IESIMGroupApplyJoinInterface>

@property (retain, nonatomic) NSObject<IESIMGroupApplyJoinInterface> *target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
