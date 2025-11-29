@class NSString, NSMutableDictionary;

@interface IESECLiveShopCartServerAnimationRecord : NSObject

@property (nonatomic) unsigned long long curRoomPlayedCount;
@property (nonatomic) unsigned long long totalPlayedCount;
@property (nonatomic) long long expiredTimestamp;
@property (nonatomic) long long skipTimestamp;
@property (nonatomic) long long curRoomSkipTimestamp;
@property (retain, nonatomic) NSMutableDictionary *originDic;
@property (nonatomic) BOOL outOfTimes;
@property (retain, nonatomic) NSString *businessKey;
@property (retain, nonatomic) NSString *iconKey;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
