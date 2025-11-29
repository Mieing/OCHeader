@class NSString;
@protocol YataInstanceInnerInterface;

@interface YataEventChainExceptionImpl : NSObject <EventChainErrorObjCDelegate>

@property (weak, nonatomic) id<YataInstanceInnerInterface> yata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onEventChainError:(id)a0;
- (id)initWithYataInstance:(id)a0;
- (void).cxx_destruct;

@end
