@class NSString, NSAttributedString, UIView;

@interface IESIMMultiTopFloatingTipsBaseViewModel : NSObject

@property (retain, nonatomic) UIView *iconView;
@property (nonatomic) struct CGSize { double width; double height; } iconViewSize;
@property (copy, nonatomic) NSString *titleText;
@property (nonatomic) long long unreadNumber;
@property (copy, nonatomic) NSString *uniqueId;
@property (copy, nonatomic) id /* block */ didShowBlock;
@property (copy, nonatomic) id /* block */ didClickBlock;
@property (nonatomic) BOOL needFoldWhenClick;
@property (nonatomic) BOOL shouldDisplayRedIcon;
@property (nonatomic) BOOL shouldDisplayRedNumber;
@property (nonatomic) long long type;
@property (nonatomic) long long limitLine;
@property (nonatomic) long long assignedPriority;
@property (nonatomic) long long sameTypeSubPriority;
@property (copy, nonatomic) NSAttributedString *attributeTitleText;

- (void).cxx_destruct;

@end
