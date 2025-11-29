@class NSString;

@interface PTYALog : NSObject <PTYLogProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerLog;
+ (void)setup:(id)a0;


@end
