@class NSString, NSObject;
@protocol AWEIMShareGroupServiceInterface;

@interface AWEIMShareGroupServiceWrapper : NSProxy <AWEIMShareGroupServiceInterface>

@property (retain, nonatomic) NSObject<AWEIMShareGroupServiceInterface> *target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
