@class FinderLiveContact, NSString, MMFinderLiveRedPacketItem, FinderLiveAppMsgSendRedPacketInfo;

@interface MMFinderLiveRedPacketSendInfo : NSObject

@property (retain, nonatomic) FinderLiveAppMsgSendRedPacketInfo *appMsgSendInfo;
@property (retain, nonatomic) FinderLiveContact *fromUserContact;
@property (nonatomic) unsigned long long seq;
@property (copy, nonatomic) NSString *clientMsgId;
@property (retain, nonatomic) MMFinderLiveRedPacketItem *referredRedPacketInfo;

- (void).cxx_destruct;

@end
