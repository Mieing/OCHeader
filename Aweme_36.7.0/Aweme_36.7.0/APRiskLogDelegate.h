@class NSString;

@interface APRiskLogDelegate : NSObject <APRiskLoggerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)print:(id)a0;

@end
