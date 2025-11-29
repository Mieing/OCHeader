@class NSMutableDictionary;

@interface AWEGoodsInternalFeedPrefetchPitaya : NSObject

@property (class, retain, nonatomic) NSMutableDictionary *preLoadInfo;

+ (void)registerPitayaMessageHandler;
+ (void)preLoadInnerDataWithAwemeID:(id)a0 playBackTime:(double)a1;

@end
