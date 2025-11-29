@class NSString, NSDictionary;

@interface AWETeenModeTabBarUpdateSelectedOptions : NSObject

@property (nonatomic) BOOL isByTap;
@property (nonatomic) BOOL forbidRefresh;
@property (copy, nonatomic) NSString *reloadScene;
@property (copy, nonatomic) NSString *transitionClass;
@property (nonatomic) double transitionDuration;
@property (copy, nonatomic) NSDictionary *transitionExtra;

- (void).cxx_destruct;
- (id)init;
- (BOOL)hasTransition;

@end
