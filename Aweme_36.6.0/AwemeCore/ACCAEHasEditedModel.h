@interface ACCAEHasEditedModel : NSObject <NSCopying>

@property (nonatomic) BOOL isVideoEdited;
@property (nonatomic) BOOL isAudioEdited;
@property (nonatomic) BOOL isTextEdited;
@property (nonatomic) BOOL isStickerEdited;
@property (nonatomic) BOOL isSubtitleEdited;
@property (nonatomic) BOOL isFilterEdited;
@property (nonatomic) BOOL isEffectEdited;
@property (nonatomic) BOOL isAdjustEdited;
@property (nonatomic) BOOL isSoundEffectEdited;

- (id)ck_extraInfo;
- (BOOL)hasAnyEdited;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
