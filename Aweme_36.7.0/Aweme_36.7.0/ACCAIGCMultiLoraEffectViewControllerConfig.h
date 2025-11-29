@class NSString, AWEVideoPublishViewModel;

@interface ACCAIGCMultiLoraEffectViewControllerConfig : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *aiEntrance;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (nonatomic) unsigned long long useDarkMode;

+ (id)defaultConfig;

- (void).cxx_destruct;

@end
