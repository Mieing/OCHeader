@class NSString;
@protocol AWEDCFeedTopAreaSearchDelegate;

@interface AWEDCFeedTopAreaSearchConfig : AWEDCFeedBaseConfig

@property (nonatomic) double height;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } searchBarInsets;
@property (nonatomic) BOOL disableScroll;
@property (nonatomic) BOOL disableRefreshBarDown;
@property (copy, nonatomic) id /* block */ customSearchBarViewBlock;
@property (nonatomic) long long alphaType;
@property (weak, nonatomic) id<AWEDCFeedTopAreaSearchDelegate> delegate;
@property (nonatomic) long long URLType;
@property (retain, nonatomic) NSString *defaultPlaceHolderText;
@property (nonatomic) long long routeType;
@property (nonatomic) unsigned long long guessWordOption;
@property (nonatomic) BOOL enableSearchRequestFrequencyControl;
@property (nonatomic) BOOL needSeparatorView;
@property (nonatomic) double separatorViewOffset;

- (void)setupDefaultConfig;
- (void).cxx_destruct;

@end
