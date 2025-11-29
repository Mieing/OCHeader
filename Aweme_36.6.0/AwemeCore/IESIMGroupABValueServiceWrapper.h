@class NSString, NSObject;
@protocol IESIMGroupABValueService;

@interface IESIMGroupABValueServiceWrapper : NSProxy <IESIMGroupABValueService>

@property (retain, nonatomic) NSObject<IESIMGroupABValueService> *target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
