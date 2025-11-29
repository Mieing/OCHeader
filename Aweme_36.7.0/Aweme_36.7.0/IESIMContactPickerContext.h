@class NSString, NSArray, NSDictionary, IESIMContactPickerComponentContext;
@protocol IESIMContactPickerLayoutProtocol;

@interface IESIMContactPickerContext : NSObject <IESIMContactPickerContextProtocol>

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (nonatomic) BOOL needSelectStickOnTopUids;
@property (copy, nonatomic) NSArray *stickOnTopUidArray;
@property (copy, nonatomic) NSArray *stickOnTopUserArray;
@property (copy, nonatomic) NSDictionary *userExt;
@property (copy, nonatomic) NSArray *defaultSelectUserIDs;
@property (copy, nonatomic) NSString *conversationID;
@property (nonatomic) BOOL doNotHideMyself;
@property (nonatomic) BOOL isDisplayMyselfSuffix;
@property (nonatomic) BOOL shouldShowNaviBar;
@property (nonatomic) BOOL disableShowInnerPush;
@property (nonatomic) BOOL hasTaskType;
@property (nonatomic) BOOL onlyGroup;
@property (nonatomic) BOOL notFilterFollower;
@property (nonatomic) BOOL shouldNotSearchInPanel;
@property (nonatomic) BOOL shouldShowFunctions;
@property (copy, nonatomic) NSString *titleString;
@property (copy, nonatomic) NSString *customSearchPlaceHolder;
@property (nonatomic) unsigned long long searchBarType;
@property (copy, nonatomic) NSString *contentSectionInsetsString;
@property (retain, nonatomic) id<IESIMContactPickerLayoutProtocol> layout;
@property (retain, nonatomic) id bizData;
@property (nonatomic) BOOL rootViewLayoutFromTopOfContainer;
@property (weak, nonatomic) IESIMContactPickerComponentContext *componentContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)eraseToAnyContext;
- (void).cxx_destruct;

@end
