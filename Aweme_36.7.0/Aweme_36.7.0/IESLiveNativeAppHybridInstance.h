@class NSString, NSMutableDictionary, UIViewController;
@protocol IESHYControllerProtocol;

@interface IESLiveNativeAppHybridInstance : NSObject

@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) NSMutableDictionary *initialData;
@property (weak, nonatomic) UIViewController<IESHYControllerProtocol> *annieXVC;

- (void)sendEvent:(id)a0 params:(id)a1;
- (void).cxx_destruct;
- (void)updateData:(id)a0;
- (void)show;
- (id)initWithSchema:(id)a0;

@end
