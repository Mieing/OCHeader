@class AWEPublishProgressView;

@interface AWEPublishProgressViewManager : NSObject

@property (readonly, nonatomic) AWEPublishProgressView *progressView;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)clear;

@end
