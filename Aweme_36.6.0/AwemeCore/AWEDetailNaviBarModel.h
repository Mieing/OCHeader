@class NSString, AWEDetailActivityLinkModel;

@interface AWEDetailNaviBarModel : NSObject

@property (nonatomic) BOOL showCloseButton;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *subTitleText;
@property (nonatomic) BOOL hasSubTitle;
@property (nonatomic) BOOL TitleAlwaysShow;
@property (nonatomic) BOOL collectButtonNeverShow;
@property (nonatomic) long long collectState;
@property (nonatomic) long long collectLocation;
@property (nonatomic) long long shareState;
@property (retain, nonatomic) AWEDetailActivityLinkModel *activityLinkModel;
@property (nonatomic) BOOL isAIGCSticker;
@property (nonatomic) BOOL isPicTemplate;
@property (copy, nonatomic) NSString *effectID;
@property (copy, nonatomic) NSString *templateID;

- (void).cxx_destruct;

@end
