@class MMLiveCdnStreamInfo, NSMutableDictionary, LiveSdkChannelParamsDesc, NSData, NSMutableArray, MMLiveCDNPlayerItem;

@interface MMLiveMultiAngleChannelInfo : NSObject

@property (retain, nonatomic) LiveSdkChannelParamsDesc *channelParamsDesc;
@property (retain, nonatomic) MMLiveCdnStreamInfo *audioModeCdnStreamInfo;
@property (retain, nonatomic) NSMutableDictionary *cdnStreamInfoDict;
@property (retain, nonatomic) NSMutableArray *displayedCdnStreamQualityTagList;
@property (retain, nonatomic) NSMutableArray *allCdnStreamQualityTagList;
@property (retain, nonatomic) NSData *qualityTagCacheBuf;
@property (nonatomic) struct CGSize { double width; double height; } videoSize;
@property (nonatomic) unsigned long long itemIndex;
@property (retain, nonatomic) MMLiveCDNPlayerItem *cdnPlayerItem;
@property (readonly, nonatomic) unsigned long long displayedCdnStreamCount;
@property (nonatomic) unsigned int retryCount;
@property (readonly, nonatomic) BOOL supportScreenRotate;

- (void)updateChannelParamsDesc:(id)a0;
- (void)cleanData;
- (void)updateCdnStreamAndClarity;
- (void)cdnPlayUrlAddObjectWithKey:(long long)a0 value:(id)a1;
- (void)cdnPlayUrlRemoveObjectWithKey:(long long)a0;
- (id)getCdnStreamInfoWithQualityTag:(unsigned int)a0 isTryViewLive:(BOOL)a1;
- (id)getCurrentDisplayedCdnStreamList;
- (void)updateVideoSizeFromPlayerEvent:(struct CGSize { double x0; double x1; })a0;
- (void)updateVideoSizeFromChannelParamsDesc;
- (void).cxx_destruct;

@end
