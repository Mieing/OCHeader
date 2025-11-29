@class NSString;

@interface BDBaseInternal : NSObject <BDBase>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackAndCallback:(id)a0 attributes:(id)a1 extra0:(id)a2 extra1:(id)a3 needCallback:(BOOL)a4;

- (void)startUpWithConfig:(id)a0;
- (void)setMonitorEvent:(id)a0 recorder:(id)a1;
- (BOOL)isSupportSuperResolution;
- (id)adaptiveDecodePolicy;
- (void)setMonitorEvent:(unsigned long long)a0 params:(id)a1;

@end
