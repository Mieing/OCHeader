@class NSString, WCFinderMediaInfo;

@interface MMMusicFinderVideoCellModel : NSObject

@property (nonatomic) unsigned long long source;
@property (retain, nonatomic) NSString *tid;
@property (retain, nonatomic) NSString *coverUrl;
@property (nonatomic) double coverWidth;
@property (nonatomic) double coverHeight;
@property (retain, nonatomic) NSString *avatarUrl;
@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSString *username;
@property (nonatomic) unsigned int likeCount;
@property (nonatomic) BOOL bAuth;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *videoUrl;
@property (retain, nonatomic) NSString *comment;
@property (nonatomic) int videoDuration;
@property (retain, nonatomic) WCFinderMediaInfo *finderMediaInfo;
@property (nonatomic) int pos;
@property (retain, nonatomic) NSString *reqId;
@property (retain, nonatomic) NSString *recommendReason;
@property (retain, nonatomic) NSString *debugMsg;

+ (id)combineTid:(id)a0 nonceId:(id)a1;
+ (void)retriveTidAndNonceId:(id)a0 tid:(id *)a1 nonceId:(id *)a2;
+ (id)modelFromFinderDataItem:(id)a0 source:(unsigned long long)a1;

- (struct CGSize { double x0; double x1; })estimateCellSizeWithMaxWidth:(double)a0;
- (struct CGSize { double x0; double x1; })estimateCoverSizeWithMaxWidth:(double)a0;
- (BOOL)canSelectVideoWithMinDuration:(double)a0;
- (unsigned long long)getFeedFrom;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToMMMusicFinderVideoCellModel:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
