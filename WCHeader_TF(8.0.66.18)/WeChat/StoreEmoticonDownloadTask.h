@class EmotionSummary;

@interface StoreEmoticonDownloadTask : NSObject

@property (retain, nonatomic) EmotionSummary *itemSummary;
@property (nonatomic) BOOL isNeedWWANDownload;

- (id)init;
- (void).cxx_destruct;

@end
