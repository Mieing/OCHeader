@class AVAsset, NSString, NSURL, CMessageWrap;

@interface VideoSendReportInfo : NSObject

@property (retain, nonatomic) CMessageWrap *msgWrap;
@property (retain, nonatomic) AVAsset *asset;
@property (retain, nonatomic) NSURL *videoURL;
@property (nonatomic) unsigned long long originSize;
@property (retain, nonatomic) NSString *codecTagName;
@property (nonatomic) int compressType;
@property (nonatomic) int encodeType;
@property (nonatomic) int unCompressReason;
@property (nonatomic) unsigned long long compressVideoCostMs;
@property (nonatomic) unsigned long long uploadCompressDataCostMs;
@property (nonatomic) int videoHitCacheType;
@property (nonatomic) int rawVideoHitCacheType;
@property (nonatomic) unsigned long long uploadRawDataCostMs;
@property (nonatomic) unsigned long long totalCostMs;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;
+ (id)modelPropertyBlacklistForConfigTag:(id)a0;

- (id)initWithMsgWrap:(id)a0;
- (id)getReportJson;
- (void).cxx_destruct;

@end
