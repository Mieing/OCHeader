@class NSString, IESEffectModel;

@interface LVEffectPanelItem : NSObject

@property (readonly, copy, nonatomic) NSString *stickerTrackThumbnailURL;
@property (readonly, copy, nonatomic) NSString *stickerPreviewCoverURL;
@property (readonly, copy, nonatomic) NSString *urlPrefix;
@property (nonatomic) unsigned long long downloadStatus;
@property (readonly, nonatomic) unsigned long long platformSupport;
@property (readonly, nonatomic) IESEffectModel *effectModel;

- (id)initWithEffectModel:(id)a0;
- (BOOL)isKTV;
- (id)initWithEffectModel:(id)a0 prefix:(id)a1;
- (id)initWithPrefix:(id)a0 effectModel:(id)a1;
- (id)extraJSONObject;
- (void).cxx_destruct;
- (id)description;
- (id)effect;
- (BOOL)isEqual:(id)a0;

@end
