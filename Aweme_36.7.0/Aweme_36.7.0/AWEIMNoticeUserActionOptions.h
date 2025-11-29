@class NSString, AWENotificationModelNew, NSDictionary, AWEUserModel, NSIndexPath;
@protocol AFDCloseFriendsColorRingDisplayManagerProtocol;

@interface AWEIMNoticeUserActionOptions : NSObject

@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) AWENotificationModelNew *notice;
@property (copy, nonatomic) NSString *accountType;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (weak, nonatomic) id<AFDCloseFriendsColorRingDisplayManagerProtocol> colorRingDisplayManager;
@property (nonatomic) BOOL isPicOrStickerClicked;

- (id)initWithUser:(id)a0 model:(id)a1 accountType:(id)a2 indexPath:(id)a3 logExtraDict:(id)a4;
- (void).cxx_destruct;

@end
