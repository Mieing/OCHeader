@class NSString, NSObject;
@protocol AWEIMSelectableServiceProtocol;

@interface AWEIMSelectableServiceProtocolWrapper : NSProxy <AWEIMSelectableServiceProtocol>

@property (retain, nonatomic) NSObject<AWEIMSelectableServiceProtocol> *target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
