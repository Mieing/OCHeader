@class NSString, UIImage, NSURL;

@interface BDPMorePanelFriendAndContactModel : NSObject

@property (nonatomic) BOOL isGroupChat;
@property (nonatomic) BOOL isLastObject;
@property (nonatomic) BOOL isSelected;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) UIImage *avatarImage;
@property (retain, nonatomic) NSURL *iconUrl;
@property (nonatomic) long long groupCapacity;

- (void).cxx_destruct;
- (id)init;

@end
