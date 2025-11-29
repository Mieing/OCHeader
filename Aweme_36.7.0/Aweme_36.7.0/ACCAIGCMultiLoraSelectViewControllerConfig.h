@class NSString, NSDictionary, NSArray;

@interface ACCAIGCMultiLoraSelectViewControllerConfig : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *actionButtonTitle;
@property (copy, nonatomic) NSString *maxLimitToastText;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *aiEntrance;
@property (copy, nonatomic) NSDictionary *trackInfo;
@property (nonatomic) unsigned long long useDarkMode;
@property (nonatomic) long long actionButtonMargin;
@property (nonatomic) BOOL singleSelect;
@property (nonatomic) long long maxSelectNum;
@property (nonatomic) unsigned long long selectStyle;
@property (copy, nonatomic) NSArray *selected;
@property (copy, nonatomic) id /* block */ confirmActionBlock;
@property (copy, nonatomic) id /* block */ confirmActionWithCloseBlock;
@property (copy, nonatomic) id /* block */ userCloseLoadingBlock;
@property (copy, nonatomic) id /* block */ didEnterVC;

+ (id)defaultConfig;

- (void).cxx_destruct;

@end
