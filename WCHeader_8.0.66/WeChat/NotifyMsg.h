@class NSString, NSDictionary, BizPayAlbum, NSNumber;

@interface NotifyMsg : NSObject

@property (retain, nonatomic) NSNumber *msgId;
@property (copy, nonatomic) NSString *talker;
@property (retain, nonatomic) NSNumber *headerShowType;
@property (retain, nonatomic) NSNumber *dataType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *avatarUrl;
@property (copy, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSNumber *createTime;
@property (retain, nonatomic) BizPayAlbum *bizPayAlbum;
@property (retain, nonatomic) NSNumber *unRead;
@property (copy, nonatomic) NSString *msgContent;
@property (copy, nonatomic) NSString *msgSource;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (retain, nonatomic) NSNumber *mergeCount;
@property (retain, nonatomic) NSNumber *mergeShowTime;
@property (retain, nonatomic) NSNumber *messageId;
@property (retain, nonatomic) NSNumber *notifyMsgBlockFlag;
@property (retain, nonatomic) NSNumber *foldBlockMsgUnRead;

+ (id)makeWithMsgId:(id)a0 talker:(id)a1 headerShowType:(id)a2 dataType:(id)a3 title:(id)a4 avatarUrl:(id)a5 displayName:(id)a6 createTime:(id)a7 bizPayAlbum:(id)a8 unRead:(id)a9 msgContent:(id)a10 msgSource:(id)a11 extraInfo:(id)a12 mergeCount:(id)a13 mergeShowTime:(id)a14 messageId:(id)a15 notifyMsgBlockFlag:(id)a16 foldBlockMsgUnRead:(id)a17;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
