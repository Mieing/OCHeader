@class NSString, NSData, MusicPostTipsDetail;

@interface WCFinderProfilePostTipsInfo : NSObject <PBCoding>

@property (copy, nonatomic) NSString *words;
@property (copy, nonatomic) NSString *coverUrl;
@property (copy, nonatomic) NSData *postTipsStreamCGIByPass;
@property (nonatomic) int scene;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *operationName;
@property (nonatomic) BOOL isPreloading;
@property (retain, nonatomic) MusicPostTipsDetail *musicTipsInfo;
@property (nonatomic) unsigned long long createTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_words;
+ (void)PBArrayAdd_coverUrl;
+ (void)PBArrayAdd_postTipsStreamCGIByPass;
+ (void)PBArrayAdd_scene;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_operationName;
+ (void)PBArrayAdd_isPreloading;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_musicTipsInfo;
+ (void)initialize;
+ (id)infoWithResp:(id)a0;

- (id)getPBPropertyTable;
- (id)initWithResp:(id)a0;
- (BOOL)isExpired;
- (void).cxx_destruct;

@end
