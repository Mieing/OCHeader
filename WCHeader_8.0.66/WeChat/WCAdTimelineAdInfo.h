@class NSString;

@interface WCAdTimelineAdInfo : NSObject

@property (retain, nonatomic) NSString *traceId;
@property (retain, nonatomic) NSString *aid;
@property (retain, nonatomic) NSString *snsId;
@property (nonatomic) unsigned long long createTime;
@property (nonatomic) unsigned int exposeCnt;
@property (nonatomic) int adPosAbs;
@property (nonatomic) unsigned int adPosRelative;
@property (nonatomic) BOOL isExpired;
@property (copy, nonatomic) NSString *tid;
@property (retain, nonatomic) NSString *uxInfo;
@property (retain, nonatomic) NSString *aboveSnsId;
@property (retain, nonatomic) NSString *belowSnsId;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
