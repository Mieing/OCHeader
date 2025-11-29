@class HybridLynxKitParams, NSString;

@interface HybridLynxi18nProvider : NSObject <LynxResourceProvider>

@property (retain, nonatomic) HybridLynxKitParams *params;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
