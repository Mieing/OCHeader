@class NSDictionary, NSString, AWEVideoPublishViewModel;

@interface ACCStickerSelectTimeConfigImpl : NSObject <ACCStickerSelectTimeConfig>

@property (retain, nonatomic) AWEVideoPublishViewModel *repository;
@property (readonly, nonatomic) NSDictionary *referExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)textReadingRanges;
- (id)audioAssetInVideoDataWithKey:(id)a0;
- (id)sizeOfVideo;
- (id)video;
- (void).cxx_destruct;
- (double)maxDuration;
- (long long)videoSource;

@end
