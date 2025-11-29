@class NSDictionary, NSString;

@interface CJPayBasicChannel : JSONModel <CJPayChannelProtocol>

@property (nonatomic) unsigned long long channelType;
@property (copy, nonatomic) NSDictionary *dataDict;
@property (copy, nonatomic) NSDictionary *trackParam;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)propertyIsOptional:(id)a0;
+ (BOOL)isAvailableUse;

- (BOOL)canProcessWithURL:(id)a0;
- (BOOL)canProcessUserActivity:(id)a0;
- (void)payActionWithDataDict:(id)a0 completionBlock:(id /* block */)a1;
- (void)trackWithEvent:(id)a0 trackParam:(id)a1;
- (void)p_trackPayChainTraceParams:(id)a0;
- (void).cxx_destruct;
- (BOOL)isInstalled;

@end
