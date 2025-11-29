@class NSString, NSObject;
@protocol AWEIMGroupCommandControllerProtocol;

@interface AWEIMGroupCommandControllerProtocolWrapper : NSProxy <AWEIMGroupCommandControllerProtocol>

@property (retain, nonatomic) NSObject<AWEIMGroupCommandControllerProtocol> *target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
