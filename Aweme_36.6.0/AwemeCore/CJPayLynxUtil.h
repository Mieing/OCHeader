@class NSString;

@interface CJPayLynxUtil : NSObject <CJPayLynxModule>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerComponents;

- (void)i_openPayscoreWithParams:(id)a0 withDelegate:(id)a1;

@end
