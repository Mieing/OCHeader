@class NSString, NSArray, AWEIMMessageConversation;

@interface IESIMBulletMessageListPreloadContext : NSObject

@property (copy, nonatomic) NSString *bulletScene;
@property (nonatomic) long long preloadScene;
@property (nonatomic) long long direction;
@property (retain, nonatomic) NSArray *sections;
@property (retain, nonatomic) NSArray *indexPathsForVisibleRows;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;

- (void).cxx_destruct;

@end
