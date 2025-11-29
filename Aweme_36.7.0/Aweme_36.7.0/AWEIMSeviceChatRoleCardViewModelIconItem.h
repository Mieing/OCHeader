@class AWEIMUser, AWEIMServiceChatRoleExpressionModel;

@interface AWEIMSeviceChatRoleCardViewModelIconItem : NSObject

@property (retain, nonatomic) AWEIMServiceChatRoleExpressionModel *model;
@property (nonatomic) double maxWidth;
@property (retain, nonatomic) AWEIMUser *user;

- (id)getHighlightAttributeText;
- (double)highlightTextWidth;
- (void).cxx_destruct;

@end
