@class FinderLiveAppMsg, NSString, FinderWindowProductInfo, NSData, WCFinderDataItem;

@interface WCFinderPostLiveAppMsgCGI : WCFinderLiveBaseBoxCgi

@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) unsigned int msgType;
@property (nonatomic) unsigned int liveScene;
@property (nonatomic) unsigned long long quoteMsgSeq;
@property (retain, nonatomic) NSString *finderUserName;
@property (retain, nonatomic) NSString *localClientMsgId;
@property (retain, nonatomic) FinderLiveAppMsg *appMsg;
@property (retain, nonatomic) FinderWindowProductInfo *questionProductInfo;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithLiveTaskId:(id)a0 finderDataItem:(id)a1 msgType:(unsigned int)a2 liveScene:(unsigned int)a3 liveCookies:(id)a4 successBlock:(id /* block */)a5 failBlock:(id /* block */)a6;
- (id)initWithLiveTaskId:(id)a0 finderDataItem:(id)a1 msgType:(unsigned int)a2 liveScene:(unsigned int)a3 liveCookies:(id)a4 quoteSeq:(unsigned long long)a5 finderUserName:(id)a6 successBlock:(id /* block */)a7 failBlock:(id /* block */)a8;
- (id)initWithLiveTaskId:(id)a0 finderDataItem:(id)a1 msgType:(unsigned int)a2 liveScene:(unsigned int)a3 liveCookies:(id)a4 toUser:(id)a5 replyConten:(id)a6 clientMsgId:(id)a7 successBlock:(id /* block */)a8 failBlock:(id /* block */)a9;
- (id)initWithLiveTaskId:(id)a0 finderDataItem:(id)a1 msgType:(unsigned int)a2 liveScene:(unsigned int)a3 liveCookies:(id)a4 toUser:(id)a5 replyConten:(id)a6 replyEmojiMd5:(id)a7 clientMsgId:(id)a8 location:(id)a9 poiAddrSubStr:(id)a10 likeMsg:(id)a11 boxId:(id)a12 extraInfo:(id)a13 successBlock:(id /* block */)a14 failBlock:(id /* block */)a15;
- (id)initWithLiveTaskId:(id)a0 finderDataItem:(id)a1 msgType:(unsigned int)a2 liveScene:(unsigned int)a3 liveCookies:(id)a4 atUsers:(id)a5 atContent:(id)a6 clientMsgId:(id)a7 boxId:(id)a8 extraInfo:(id)a9 successBlock:(id /* block */)a10 failBlock:(id /* block */)a11;
- (id)initWithLiveTaskIdForFriendChat:(id)a0 finderDataItem:(id)a1 liveScene:(unsigned int)a2 msgType:(unsigned int)a3 content:(id)a4 liveCookies:(id)a5 clientMsgId:(id)a6 boxId:(id)a7 extraInfo:(id)a8 successBlock:(id /* block */)a9 failBlock:(id /* block */)a10;
- (id)initWithLiveTaskIdForProductQuestion:(id)a0 finderDataItem:(id)a1 msgType:(unsigned int)a2 liveScene:(unsigned int)a3 liveCookies:(id)a4 content:(id)a5 productInfo:(id)a6 clientMsgId:(id)a7 boxId:(id)a8 extraInfo:(id)a9 successBlock:(id /* block */)a10 failBlock:(id /* block */)a11;
- (id)initWithLiveTaskForEmoticonComment:(id)a0 finderDataItem:(id)a1 liveScene:(unsigned int)a2 liveCookies:(id)a3 clientMsgId:(id)a4 boxId:(id)a5 emoticonMd5:(id)a6 successBlock:(id /* block */)a7 failBlock:(id /* block */)a8;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void)setMsgPayload:(id)a0;
- (void)setMsgBoxId:(id)a0;
- (void).cxx_destruct;

@end
