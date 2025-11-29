@interface MMLiveReplaySetting : NSObject <NSCopying>

@property (nonatomic) BOOL autoGenLiveReplay;
@property (nonatomic) BOOL intelligentlyGenReplayHighlight;
@property (nonatomic) BOOL enableReplayDumpDanmu;
@property (nonatomic) BOOL canUseIntelligentlyGenReplayHighlight;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLiveReplaySettingPbObject:(id)a0;
- (BOOL)fromLiveReplaySettingPbObject:(id)a0;
- (id)toLiveReplaySettingPbObject;

@end
