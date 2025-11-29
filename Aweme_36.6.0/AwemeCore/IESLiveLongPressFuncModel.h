@class NSString, UIImage, NSURL;

@interface IESLiveLongPressFuncModel : IESLiveDynamicModel

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) long long state;
@property (retain, nonatomic) UIImage *icon;
@property (retain, nonatomic) NSURL *iconUrl;
@property (retain, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (nonatomic) BOOL showOnline;
@property (nonatomic) unsigned long long hashFlag;
@property (nonatomic) BOOL hasRecommend;
@property (nonatomic) BOOL showRedDot;
@property (nonatomic) int imShareUnableStyle;
@property (retain, nonatomic) NSString *tipContent;
@property (nonatomic) BOOL groupChat;
@property (nonatomic) BOOL isDisabled;
@property (retain, nonatomic) NSString *disabledInfo;
@property (copy, nonatomic) NSString *entranceName;
@property (copy, nonatomic) NSString *actionType;
@property (copy, nonatomic) NSString *elementName;
@property (copy, nonatomic) NSString *moduleName;

- (void).cxx_destruct;

@end
