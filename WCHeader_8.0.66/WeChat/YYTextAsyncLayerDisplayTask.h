@interface YYTextAsyncLayerDisplayTask : NSObject

@property (copy, nonatomic) id /* block */ willDisplay;
@property (copy, nonatomic) id /* block */ display;
@property (copy, nonatomic) id /* block */ didDisplay;

- (void).cxx_destruct;

@end
