@class NSString, UIViewController;

@interface BDUGLuckyPageTraceInfo : NSObject

@property (weak, nonatomic) UIViewController *page;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *tagWithTime;

- (id)initWithPagePointer:(id)a0 tag:(id)a1 tagWithTime:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
