@class NSString, AWEMusicVideoEngineModel, AWEMusicVideoModelPreview, NSNumber;

@interface AWEMusicVideoModel : NSObject

@property (copy, nonatomic) NSString *mediaID;
@property (retain, nonatomic) AWEMusicVideoEngineModel *videoEngineModel;
@property (retain, nonatomic) NSNumber *expireTime;
@property (copy, nonatomic) NSString *url;
@property (retain, nonatomic) AWEMusicVideoModelPreview *preview;
@property (nonatomic) long long preRiskResult;
@property (copy, nonatomic) NSString *preRiskResultLogId;
@property (nonatomic) long long riskResult;
@property (copy, nonatomic) NSString *riskResultLogId;

- (id)initWithMediaID:(id)a0 videoModel:(id)a1 url:(id)a2 expireTime:(long long)a3 preivew:(id)a4;
- (void).cxx_destruct;
- (BOOL)isExpired;
- (BOOL)isVerified;

@end
