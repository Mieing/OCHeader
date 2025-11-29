@class NSArray;

@interface IESLiveJSBRegister : NSObject

@property (retain, nonatomic) NSArray *injectedJsbHandlers;

+ (id)sharedInstance;

- (void)registerJSBHandler:(id)a0;
- (void)registerJSBHandlers:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
