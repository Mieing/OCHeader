@class NSString;

@interface TMBPEAActionServiceImpl : NSObject <TMBPEAActionService>

@property (nonatomic) BOOL enable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)serviceEnabled;
- (void)setServiceEnabled:(BOOL)a0;

@end
