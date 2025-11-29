@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_semaphore;

@interface IESECListKitSharedData : NSObject <IESECListKitSharedDataProtocol> {
    NSObject<OS_dispatch_semaphore> *_lock;
}

@property (retain, nonatomic) NSMutableDictionary *sharedDataDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
