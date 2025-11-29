@class NSString, AWEURLModel;

@interface AWEIMShareShopContentProps : AWEIMUIViewPresenterProps

@property (copy, nonatomic) id /* block */ coverTappedActionBlock;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *conversationID;
@property (retain, nonatomic) AWEURLModel *avatarURLModel;

- (void).cxx_destruct;

@end
