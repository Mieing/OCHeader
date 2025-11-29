@class NSDictionary, TTVideoEngineModel, NSString;

@interface TTVideoEnginePreloaderVideoModelItem : NSObject

@property (nonatomic) unsigned long long resolution;
@property (retain, nonatomic) TTVideoEngineModel *videoModel;
@property (nonatomic) long long preloadSize;
@property (nonatomic) long long preloadMilliSecond;
@property (nonatomic) long long preloadMilliSecondOffset;
@property (nonatomic) long long preloadTimestamp;
@property (nonatomic) long long preloadDurationMilliSecond;
@property (retain, nonatomic) NSDictionary *params;
@property (nonatomic) long long priorityLevel;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *subTag;
@property (copy, nonatomic) NSString *groupId;
@property (nonatomic) long long dashAudioPreloadSize;
@property (nonatomic) long long dashVideoPreloadSize;
@property (copy, nonatomic) id /* block */ usingUrlInfo;
@property (copy, nonatomic) id /* block */ cacheFilePath;
@property (copy, nonatomic) id /* block */ preloadEnd;
@property (copy, nonatomic) id /* block */ preloadCanceled;
@property (copy, nonatomic) id /* block */ preloadDidStart;
@property (copy, nonatomic) id /* block */ preloadProgress;
@property (nonatomic) BOOL enableGearStrategy;

+ (id)videoModelItem:(id)a0 resolution:(unsigned long long)a1 preloadSize:(long long)a2 params:(id)a3;
+ (id)videoModelItem:(id)a0 resolution:(unsigned long long)a1 preloadMilliSecondOffset:(long long)a2 preloadSize:(long long)a3 params:(id)a4;

- (void).cxx_destruct;
- (id)init;

@end
