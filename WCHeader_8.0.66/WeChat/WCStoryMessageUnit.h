@class NSString, NSMutableArray;

@interface WCStoryMessageUnit : NSObject

@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSMutableArray *dataItems;
@property (nonatomic) unsigned int lastCommentTime;
@property (retain, nonatomic) NSString *lastCommentTid;
@property (retain, nonatomic) NSString *lastCommentId;
@property (nonatomic) long long unreadCommentCount;

- (void).cxx_destruct;

@end
