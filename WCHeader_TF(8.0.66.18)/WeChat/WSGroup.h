@class NSString, NSMutableArray, SnsObject;

@interface WSGroup : WXPBGeneratedMessage

@property (nonatomic) unsigned long long groupId;
@property (nonatomic) unsigned int groupTime;
@property (retain, nonatomic) SnsObject *topObject;
@property (retain, nonatomic) NSMutableArray *feedIdList;
@property (retain, nonatomic) NSString *wording;
@property (retain, nonatomic) NSString *completeWording;

+ (void)initialize;

- (void)setCompleteWording:(id)a0;
- (id)completeWording;
- (void)setWording:(id)a0;
- (id)wording;
- (void)setFeedIdList:(id)a0;
- (id)feedIdList;
- (void)setTopObject:(id)a0;
- (id)topObject;
- (void)setGroupTime:(unsigned int)a0;
- (unsigned int)groupTime;
- (void)setGroupId:(unsigned long long)a0;
- (unsigned long long)groupId;

@end
