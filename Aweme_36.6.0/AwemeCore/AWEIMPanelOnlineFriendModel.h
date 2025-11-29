@class NSString, NSArray;

@interface AWEIMPanelOnlineFriendModel : NSObject <AWEIMPanelOnlineFriendProtocol>

@property (copy, nonatomic) NSString *userName;
@property (nonatomic) unsigned long long avatarType;
@property (copy, nonatomic) NSArray *avatarUrlListArray;

- (void).cxx_destruct;

@end
