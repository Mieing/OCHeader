@class NSString, UIImage, NSURL;

@interface BDPGameMorePanelFriendAndContactModel : NSObject

@property (nonatomic) BOOL isGroupChat;
@property (nonatomic) BOOL isLastObject;
@property (nonatomic) BOOL isSelected;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) UIImage *avatarImage;
@property (retain, nonatomic) NSURL *iconUrl;
@property (nonatomic) long long groupCapacity;
@property (copy, nonatomic) NSString *shareType;
@property (copy, nonatomic) NSString *identifier;

- (void).cxx_destruct;

@end
