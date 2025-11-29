@class NSArray, NSString;

@interface MMFinderLiveRealNameFriendLikeNotificationMsg : NSObject

@property (retain, nonatomic) NSArray *likeList;
@property (readonly, nonatomic) NSArray *displayLikeList;
@property (retain, nonatomic) NSString *content;
@property (readonly, nonatomic) NSArray *toFinderLikeInfoList;
@property (readonly, nonatomic) NSString *friendLikeListReportStr;
@property (readonly, nonatomic) NSArray *friendUserNameList;

+ (id)notificationMsgWithSvrMsg:(id)a0;
+ (id)notificationMsgWithSvrLikeInfo:(id)a0;
+ (id)notificationMsgWithClientLikeUserList:(id)a0;
+ (id)selfNotificationMsg;

- (void).cxx_destruct;

@end
