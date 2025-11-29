@class NSString, NSMutableDictionary;

@interface MMWebViewBackgroundAlbumInfo : NSObject <PBCoding>

@property (copy, nonatomic) NSString *albumId;
@property (copy, nonatomic) NSString *curAudioId;
@property (retain, nonatomic) NSMutableDictionary *dictAlbumAudioListInfo;
@property (copy, nonatomic) NSString *domain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_albumId;
+ (void)PBArrayAdd_dictAlbumAudioListInfo;
+ (void)PBArrayAdd_curAudioId;
+ (void)PBArrayAdd_domain;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (void).cxx_destruct;

@end
