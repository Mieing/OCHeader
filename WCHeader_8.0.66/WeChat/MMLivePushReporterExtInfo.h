@class NSString;

@interface MMLivePushReporterExtInfo : NSObject

@property (nonatomic) unsigned long long liveId;
@property (copy, nonatomic) NSString *feedId;
@property (copy, nonatomic) NSString *sdkUserId;
@property (nonatomic) unsigned int sdkRoomId;
@property (copy, nonatomic) NSString *anchorNickname;

- (id)initWithLiveId:(unsigned long long)a0 feedId:(id)a1 sdkUserId:(id)a2 sdkRoomId:(unsigned int)a3 andAnchorNickname:(id)a4;
- (void).cxx_destruct;

@end
