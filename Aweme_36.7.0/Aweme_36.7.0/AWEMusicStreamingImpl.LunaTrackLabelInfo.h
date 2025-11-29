@class NSArray, _TtC21AWEMusicStreamingImpl19LunaNewReleaseLabel;

@interface AWEMusicStreamingImpl.LunaTrackLabelInfo : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* function */ subscriberDownloadQualities;
    void /* function */ subscriberPlayableQualities;
}

@property (nonatomic) BOOL onlySubscriberDownload;
@property (nonatomic) BOOL onlySubscriberPlayable;
@property (nonatomic, copy) NSArray *subscriberDownloadQualities;
@property (nonatomic, copy) NSArray *subscriberPlayableQualities;
@property (nonatomic) BOOL isOriginal;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl19LunaNewReleaseLabel *releaseLabel;
@property (nonatomic) BOOL isOnSale;

+ (id)releaseLabelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
