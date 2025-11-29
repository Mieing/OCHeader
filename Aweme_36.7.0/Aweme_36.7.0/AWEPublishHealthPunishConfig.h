@class NSString;

@interface AWEPublishHealthPunishConfig : NSObject

@property (readonly, nonatomic) BOOL hitHealthPunish;
@property (readonly, nonatomic) long long textLimitCount;
@property (readonly, nonatomic) NSString *textLimitDesc;

+ (id)creatFromJsonString:(id)a0;

- (id)initWithLimitCount:(long long)a0 limtDesc:(id)a1;
- (void).cxx_destruct;

@end
