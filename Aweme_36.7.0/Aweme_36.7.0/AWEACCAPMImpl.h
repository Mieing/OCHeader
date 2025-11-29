@class NSString;

@interface AWEACCAPMImpl : NSObject <ACCAPMProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)attachInfo:(id)a0 forKey:(id)a1;
+ (void)attachFilter:(id)a0 forKey:(id)a1;


@end
