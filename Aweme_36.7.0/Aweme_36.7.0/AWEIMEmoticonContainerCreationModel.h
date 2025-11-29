@class NSArray, UIColor, NSString;

@interface AWEIMEmoticonContainerCreationModel : NSObject

@property (copy, nonatomic) NSArray *themeInfos;
@property (nonatomic) long long containerType;
@property (nonatomic) BOOL needShowStoreEntry;
@property (nonatomic) BOOL needHideBottomView;
@property (nonatomic) BOOL needForceLightMode;
@property (retain, nonatomic) UIColor *tabBackgroundColor;
@property (retain, nonatomic) UIColor *panelBackgroundColor;
@property (nonatomic) unsigned long long btnConfig;
@property (nonatomic) BOOL needShowRecentlyUsedLittleEmoticons;
@property (nonatomic) BOOL initialVerticalAlignmentCenter;
@property (copy, nonatomic) NSString *enterFrom;

- (id)initWithThemeInfos:(id)a0 containerType:(long long)a1;
- (void).cxx_destruct;

@end
