@class FinderLiveContact, NSString, FinderLiveAppMsgRecvRedPacketInfo;

@interface MMFinderLiveRedPacketReceiveInfo : NSObject

@property (retain, nonatomic) FinderLiveAppMsgRecvRedPacketInfo *appMsgReceiveInfo;
@property (retain, nonatomic) FinderLiveContact *fromUserContact;
@property (retain, nonatomic) FinderLiveContact *toUserContact;
@property (nonatomic) unsigned long long seq;
@property (copy, nonatomic) NSString *clientMsgId;

- (void).cxx_destruct;

@end
