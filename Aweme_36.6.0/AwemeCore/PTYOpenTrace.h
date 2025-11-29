@class NSString;

@interface PTYOpenTrace : NSObject <PTYOpenTraceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)reportTrace:(const void *)a0 filter:(const void *)a1;
+ (BOOL)enabled;
+ (void)setup:(id)a0;


@end
