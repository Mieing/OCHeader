@class NSString, NSDictionary;

@interface GameLifeFindMoreFriendEntranceInfo : NSObject

@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *wording;
@property (nonatomic) BOOL showIcon;
@property (nonatomic) unsigned int unReadCount;
@property (nonatomic) unsigned int lastUpdateMsgTime;
@property (nonatomic) unsigned int msgType;
@property (retain, nonatomic) NSDictionary *externInfo;

- (void).cxx_destruct;

@end
