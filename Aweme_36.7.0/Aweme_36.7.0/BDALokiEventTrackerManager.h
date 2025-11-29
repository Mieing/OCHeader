@class NSString;

@interface BDALokiEventTrackerManager : NSObject <BDASDKProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)protocolImp;
+ (id)sharedInstance;

- (void)performanceEventV3:(id)a0 params:(id)a1;
- (void)eventData:(id)a0;
- (void)eventV3:(id)a0 params:(id)a1 isDoubleSending:(BOOL)a2;

@end
