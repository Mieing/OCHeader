@protocol YataInstanceInnerInterface;

@interface YataModule : NSObject

@property (weak, nonatomic) id<YataInstanceInnerInterface> yataInstance;

- (id)initWithYataInstance:(id)a0;
- (void).cxx_destruct;

@end
