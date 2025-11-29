@class NSString;

@interface AWEECOMIMPaasLogNew : NSObject <AWEECOMIMPaasLogProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)infoLogReportWithTag:(id)a0 content:(id)a1;

@end
