@class NSString;

@interface APRiskRPCDelegate : NSObject <APRiskRPCProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)convertConfigRequest:(id)a0;
+ (id)convertConfigResponse:(id)a0;
+ (id)convertRequest:(id)a0;
+ (id)convertResponse:(id)a0;

- (BOOL)updateLog:(id)a0 config:(id)a1;
- (id)sendStaticRequest:(id)a0 config:(id)a1;
- (id)sendConfigReportRequest:(id)a0 config:(id)a1;

@end
