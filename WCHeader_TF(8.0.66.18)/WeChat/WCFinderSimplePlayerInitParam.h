@class UIColor, NSString;

@interface WCFinderSimplePlayerInitParam : NSObject

@property (nonatomic) BOOL ignoreHDR;
@property (nonatomic) BOOL notShowDefaultThumb;
@property (retain, nonatomic) UIColor *playerBackgroundColor;
@property (copy, nonatomic) NSString *audioModuleGroupName;
@property (nonatomic) int audioModuleScene;
@property (nonatomic) BOOL beforePlayHideLoadingView;
@property (nonatomic) long long imageMediaType;
@property (nonatomic) BOOL bUseShareCover;

+ (id)defaultParams;

- (void).cxx_destruct;

@end
