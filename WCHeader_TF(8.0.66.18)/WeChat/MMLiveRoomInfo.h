@class NSString;

@interface MMLiveRoomInfo : NSObject

@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned long long liveStatus;
@property (nonatomic) unsigned int startTime;
@property (nonatomic) unsigned int endTime;
@property (copy, nonatomic) NSString *joinLiveTips;
@property (copy, nonatomic) NSString *wxaGameExportId;
@property (copy, nonatomic) NSString *topic;

- (id)initWithLiveTask:(id)a0;
- (void).cxx_destruct;

@end
