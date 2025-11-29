@class NSString, NSDictionary;

@interface AWENormalModeTabBarUpdateSelectedOptions : NSObject

@property (nonatomic) long long enterType;
@property (copy, nonatomic) NSString *callerId;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (nonatomic) BOOL isByTap;
@property (nonatomic) BOOL needSkinCheckOnlyItem;
@property (nonatomic) BOOL forbidRefresh;
@property (nonatomic) BOOL forbidUpdateUI;
@property (nonatomic) BOOL forbidUpdateUIButEnableUpdateTheme;
@property (copy, nonatomic) NSString *reloadScene;
@property (copy, nonatomic) NSString *transitionClass;
@property (nonatomic) double transitionDuration;
@property (copy, nonatomic) NSDictionary *transitionExtra;

- (void).cxx_destruct;
- (id)init;
- (BOOL)hasTransition;

@end
