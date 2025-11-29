@class NSString;

@interface MMFinderLiveRedPacketMessage : NSObject

@property (copy, nonatomic) NSString *liveId;
@property (copy, nonatomic) NSString *finderObjectId;
@property (copy, nonatomic) NSString *finderNonceId;
@property (copy, nonatomic) NSString *redPacketId;

- (void).cxx_destruct;

@end
