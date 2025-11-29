@class AWEBDARifleViewConfiguration, NSString, AWEBDARifleView;

@interface AWEBDARifleProcessor : NSObject <AWEBDARifleProcessorProtocol>

@property (weak, nonatomic) AWEBDARifleView *bdaRifleView;
@property (weak, nonatomic) AWEBDARifleViewConfiguration *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldBeProcesseWithConfig:(id)a0;
+ (unsigned long long)scene;

- (void)processRifle:(id)a0 withConfig:(id)a1;
- (void).cxx_destruct;

@end
