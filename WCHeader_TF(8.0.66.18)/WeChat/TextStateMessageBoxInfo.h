@class NSArray, NSString;

@interface TextStateMessageBoxInfo : NSObject

@property (copy, nonatomic) NSArray *userNames;
@property (copy, nonatomic) NSString *tip;
@property (nonatomic) unsigned int unreadLikeCount;
@property (nonatomic) unsigned int unreadCommentCount;
@property (nonatomic) unsigned int totalUnreadCount;

- (void).cxx_destruct;

@end
