@class HTSEventContext, IESLiveComponentContext;

@interface IESLiveVideoAdjustVMContext : NSObject

@property (nonatomic) long long scene;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;

- (void).cxx_destruct;

@end
