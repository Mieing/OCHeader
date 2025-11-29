@class NSString, NSMutableDictionary;

@interface TIMXPBNRobotInfo : GPBMessage

@property (nonatomic) long long userId;
@property (nonatomic) BOOL hasUserId;
@property (copy, nonatomic) NSString *secUid;
@property (nonatomic) BOOL hasSecUid;
@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL hasEnable;
@property (retain, nonatomic) NSMutableDictionary *ext;
@property (readonly, nonatomic) unsigned long long ext_Count;

+ (id)descriptor;

- (id)ext;
- (BOOL)enable;
- (id)secUid;
- (long long)userId;

@end
