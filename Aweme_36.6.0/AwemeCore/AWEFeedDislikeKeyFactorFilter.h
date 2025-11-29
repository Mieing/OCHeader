@class NSString, NSMutableArray;

@interface AWEFeedDislikeKeyFactorFilter : NSObject <AWEFeedDislikeFilterProtocol>

@property (retain, nonatomic) NSMutableArray *cachedAuthorInfos;
@property (retain, nonatomic) NSMutableArray *cachedMusicInfos;
@property (retain, nonatomic) NSMutableArray *cachedHashTagInfos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)filterArrayWithModels:(id)a0;
- (void)dislikeWithModel:(id)a0 referString:(id)a1;
- (void)revertDislikeWithModel:(id)a0 referString:(id)a1;
- (void)loadFromCache;
- (void)submitDislikeReasons:(id)a0 awemeModel:(id)a1;
- (BOOL)p_validateAuthorInfo:(id)a0;
- (BOOL)p_validateMusicInfo:(id)a0;
- (BOOL)p_validateHashTagInfo:(id)a0;
- (void)storeToCache;
- (long long)expireDay;
- (BOOL)p_isTimeStampExpire:(double)a0;
- (void).cxx_destruct;
- (void)cleanCache;
- (id)init;
- (BOOL)enabled;
- (void)dealloc;
- (void)didEnterBackground:(id)a0;
- (void)willTerminate:(id)a0;

@end
