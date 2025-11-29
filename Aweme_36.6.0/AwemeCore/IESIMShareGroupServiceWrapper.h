@class NSString, NSObject;
@protocol IESIMShareGroupServiceInterface;

@interface IESIMShareGroupServiceWrapper : NSProxy <IESIMShareGroupServiceInterface>

@property (retain, nonatomic) NSObject<IESIMShareGroupServiceInterface> *target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
