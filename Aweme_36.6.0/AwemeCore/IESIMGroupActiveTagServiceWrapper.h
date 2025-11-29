@class NSString, NSObject;
@protocol IESIMGroupActiveTagService;

@interface IESIMGroupActiveTagServiceWrapper : NSProxy <IESIMGroupActiveTagService>

@property (retain, nonatomic) NSObject<IESIMGroupActiveTagService> *target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
