@class NSString, NSObject;
@protocol IESIMMySocialGroupService;

@interface IESIMMySocialGroupServiceWrapper : NSProxy <IESIMMySocialGroupService>

@property (retain, nonatomic) NSObject<IESIMMySocialGroupService> *target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
