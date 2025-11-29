@class NSString, NSMutableDictionary;

@interface IESLLLiveIconAnimationRecond : NSObject

@property (copy, nonatomic) NSString *animationKey;
@property (nonatomic) long long totalPlayedTimes;
@property (nonatomic) BOOL outOfTimes;
@property (nonatomic) BOOL isShowForMaxTimes;
@property (nonatomic) long long clickExpiredTimeStamp;
@property (nonatomic) long long skipExpiredTimeStamp;
@property (retain, nonatomic) NSMutableDictionary *originDic;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
