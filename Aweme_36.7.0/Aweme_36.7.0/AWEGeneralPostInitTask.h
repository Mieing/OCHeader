@class NSString;

@interface AWEGeneralPostInitTask : NSObject <HTSBootTask>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)startPreload:(id)a0;
+ (void)execute;


@end
