@class NSString, NSDictionary;

@interface IESLiveGameOpenPlatformOpenCapability : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) long long maximumTimes;
@property (readonly, nonatomic) long long unitTime;
@property (retain, nonatomic) NSDictionary *authInfo;

- (id)initWithName:(id)a0 maximumTimes:(long long)a1 unitTime:(long long)a2 authInfo:(id)a3;
- (id)initWithName:(id)a0 maximumTimes:(long long)a1 unitTime:(long long)a2;
- (void).cxx_destruct;

@end
