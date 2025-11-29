@class GroupNoticeItem, CContact, UIViewController;

@interface GNOpenParam : NSObject

@property (retain, nonatomic) CContact *chatRoomContact;
@property (nonatomic) int scene;
@property (weak, nonatomic) UIViewController *parentViewController;
@property (nonatomic) BOOL isHistory;
@property (retain, nonatomic) GroupNoticeItem *item;

- (void).cxx_destruct;

@end
