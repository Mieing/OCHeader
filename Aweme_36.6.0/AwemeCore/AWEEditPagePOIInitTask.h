@class NSString;

@interface AWEEditPagePOIInitTask : NSObject <ACCBusinessTemplate, HTSBootTask>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)execute;

- (id)componentClasses;

@end
