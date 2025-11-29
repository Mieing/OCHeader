@class UIColor, NSString, AWEInnerPushLeftIconStaticDataModel, NSAttributedString;
@protocol AWEIMStreakDisplayManagerProtocol;

@interface AWEInnerPushCommonViewTitleItemModel : NSObject

@property (copy, nonatomic) NSAttributedString *attrString;
@property (copy, nonatomic) NSString *textString;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) AWEInnerPushLeftIconStaticDataModel *iconModel;
@property (nonatomic) unsigned long long iconSizeEnum;
@property (retain, nonatomic) id<AWEIMStreakDisplayManagerProtocol> imStreakDisplayManager;

- (void).cxx_destruct;

@end
