@class NSNumber;

@interface HTSLiveAnimation : NSObject

@property (nonatomic) BOOL ready;
@property (retain, nonatomic) NSNumber *duration;
@property (copy, nonatomic) id /* block */ onTapAction;

- (void)preRenderFinished:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)onTap:(id)a0;

@end
