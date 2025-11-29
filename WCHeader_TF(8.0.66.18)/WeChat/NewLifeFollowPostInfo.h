@class NSString;

@interface NewLifeFollowPostInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *postGuideWording;
@property (nonatomic) unsigned long long followObjectId;
@property (retain, nonatomic) NSString *followObjectNonceId;
@property (retain, nonatomic) NSString *followObjectJumpWording;

+ (void)initialize;

- (void)setFollowObjectJumpWording:(id)a0;
- (id)followObjectJumpWording;
- (void)setFollowObjectNonceId:(id)a0;
- (id)followObjectNonceId;
- (void)setFollowObjectId:(unsigned long long)a0;
- (unsigned long long)followObjectId;
- (void)setPostGuideWording:(id)a0;
- (id)postGuideWording;

@end
