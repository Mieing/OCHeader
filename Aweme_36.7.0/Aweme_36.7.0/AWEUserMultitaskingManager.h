@class AWEUserMultitaskingHintView;

@interface AWEUserMultitaskingManager : NSObject

@property (retain, nonatomic) AWEUserMultitaskingHintView *multitaskingHintView;
@property (nonatomic) BOOL isMultitaskingHintViewShow;

+ (id)sharedInstance;

- (BOOL)shouldHandleMultitasking;
- (void)handleMultitaskingWithBackAction:(id /* block */)a0;
- (BOOL)shouldHandleMultitasking480;
- (void).cxx_destruct;

@end
