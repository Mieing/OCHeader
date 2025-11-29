@class NSString, MMWebViewBackgroundAlbumAudioExtInfo;

@interface MMWebViewBackgroundAlbumAudioInfo : NSObject <PBCoding>

@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *albumId;
@property (copy, nonatomic) NSString *audioId;
@property (nonatomic) unsigned int durantion;
@property (nonatomic) unsigned int offset;
@property (retain, nonatomic) MMWebViewBackgroundAlbumAudioExtInfo *extInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_albumId;
+ (void)PBArrayAdd_audioId;
+ (void)PBArrayAdd_durantion;
+ (void)PBArrayAdd_offset;
+ (void)PBArrayAdd_domain;
+ (void)PBArrayAdd_extInfo;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
