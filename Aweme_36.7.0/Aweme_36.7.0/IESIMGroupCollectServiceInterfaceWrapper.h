@class NSString, NSObject;
@protocol IESIMGroupCollectServiceInterface;

@interface IESIMGroupCollectServiceInterfaceWrapper : NSProxy <IESIMGroupCollectServiceInterface>

@property (retain, nonatomic) NSObject<IESIMGroupCollectServiceInterface> *target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
