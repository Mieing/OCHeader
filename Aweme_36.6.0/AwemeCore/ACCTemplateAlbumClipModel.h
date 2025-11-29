@class ACCTemplateAlbumClipInfo;

@interface ACCTemplateAlbumClipModel : NSObject

@property (retain, nonatomic) ACCTemplateAlbumClipInfo *clipInfo;
@property (nonatomic) BOOL hasSelected;
@property (nonatomic) BOOL hasEdit;
@property (nonatomic) BOOL isLivePhoto;
@property (nonatomic) long long livePhotoState;

+ (id)convertToFollowShootParam:(id)a0;
+ (id)convertFromFollowShootParam:(id)a0;

- (void).cxx_destruct;

@end
