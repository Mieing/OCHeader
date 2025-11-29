@class NSString;

@interface BDHMNormalReport : NSObject <BDHMReportPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (void)reportWithData:(id)a0 service:(id)a1;

@end
