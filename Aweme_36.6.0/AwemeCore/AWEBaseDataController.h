@class NSString;

@interface AWEBaseDataController : NSObject <AWEDataControllerProtocol>

@property BOOL isRequesting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;

@end
