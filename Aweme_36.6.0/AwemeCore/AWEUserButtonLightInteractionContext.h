@class NSMutableSet, NSString, NSDictionary, AWEAwemeModel, UIView, AWEUserModel, UIImage;

@interface AWEUserButtonLightInteractionContext : NSObject

@property (retain, nonatomic) AWEUserModel *userModel;
@property (copy, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *clickedSource;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (weak, nonatomic) UIView *avatarView;
@property (weak, nonatomic) UIView *cellView;
@property (copy, nonatomic) NSString *sendMsgTitle;
@property (retain, nonatomic) UIImage *lightInteractionIcon;
@property (copy, nonatomic) NSString *lightInteractionTitle;
@property (nonatomic) BOOL needRequestLightInteractionIconURL;
@property (nonatomic) double lightInteractionIconSize;
@property (nonatomic) double padding;
@property (retain, nonatomic) NSMutableSet *showTrackedUIDs;
@property (copy, nonatomic) NSString *userIDForDisplay;
@property (copy, nonatomic) NSString *customEnterChatMethod;

- (void).cxx_destruct;

@end
