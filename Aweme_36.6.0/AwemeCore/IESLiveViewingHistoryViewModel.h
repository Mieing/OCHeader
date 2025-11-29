@class FeedItem, NSString, NSArray, HTSLiveRoom;

@interface IESLiveViewingHistoryViewModel : NSObject

@property (retain, nonatomic) FeedItem *item;
@property (readonly, copy, nonatomic) NSString *userID;
@property (readonly, copy, nonatomic) NSString *secUID;
@property (readonly, copy, nonatomic) NSString *nickName;
@property (readonly, copy, nonatomic) NSArray *urlList;
@property (readonly, copy, nonatomic) NSString *desc;
@property (readonly, copy, nonatomic) NSString *message;
@property (readonly, copy, nonatomic) NSString *rid;
@property (readonly, nonatomic) unsigned long long historyType;
@property (readonly, nonatomic) HTSLiveRoom *roomData;
@property (nonatomic, getter=isLive) BOOL live;

- (id)initWithFeedItem:(id)a0;
- (void)dealFeedItem:(id)a0;
- (void).cxx_destruct;

@end
