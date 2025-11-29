@class NSString, NSMutableArray;

@interface StatusFooterInfoWrapper : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *sourceId;
@property (retain, nonatomic) NSString *sourceName;
@property (retain, nonatomic) NSString *sourceIconUrl;
@property (retain, nonatomic) NSString *sourceActivityId;
@property (retain, nonatomic) NSString *verifyInfo;
@property (retain, nonatomic) NSMutableArray *sourceJumpInfos;
@property (retain, nonatomic) NSMutableArray *jumpInfos;
@property (retain, nonatomic) NSString *activityToken;
@property (retain, nonatomic) NSMutableArray *jumpElements;

+ (void)initialize;

- (void)setJumpElements:(id)a0;
- (id)jumpElements;
- (void)setActivityToken:(id)a0;
- (id)activityToken;
- (void)setJumpInfos:(id)a0;
- (id)jumpInfos;
- (void)setSourceJumpInfos:(id)a0;
- (id)sourceJumpInfos;
- (void)setVerifyInfo:(id)a0;
- (id)verifyInfo;
- (void)setSourceActivityId:(id)a0;
- (id)sourceActivityId;
- (void)setSourceIconUrl:(id)a0;
- (id)sourceIconUrl;
- (void)setSourceName:(id)a0;
- (id)sourceName;
- (void)setSourceId:(id)a0;
- (id)sourceId;

@end
