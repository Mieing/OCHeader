@class NSArray, NSString, ACCTemplateAlbumClipInfo, NSNumber, ACCImportMaterialFixedSlotInfo;

@interface ACCImportMaterialSelectViewSlotConfig : NSObject

@property (nonatomic) double duration;
@property (nonatomic) BOOL shouldShowDuration;
@property (nonatomic) BOOL cancelDurationLimit;
@property (retain, nonatomic) NSArray *cloneSlotIndex;
@property (retain, nonatomic) NSNumber *shouldDisableVideo;
@property (nonatomic) BOOL shouldDetectFace;
@property (retain, nonatomic) ACCTemplateAlbumClipInfo *albumClipInfo;
@property (nonatomic) BOOL highlighted;
@property (nonatomic) BOOL highlight;
@property (nonatomic) BOOL hasEdit;
@property (nonatomic) long long resourceClipStart;
@property (nonatomic) long long resourceClipEnd;
@property (nonatomic) long long slotWidth;
@property (nonatomic) long long slotHeight;
@property (copy, nonatomic) NSString *alignMode;
@property (nonatomic) BOOL isFixedSlot;
@property (retain, nonatomic) ACCImportMaterialFixedSlotInfo *fixedSlotInfo;

- (void).cxx_destruct;

@end
