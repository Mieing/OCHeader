@class VideoCompositionAttr, NSString, UIImage, EditVideoAttr;

@interface SightDraftItem : MMObject <PBCoding, NSCoding>

@property (nonatomic) BOOL isEdited;
@property (retain, nonatomic) EditVideoAttr *editVideoAttr;
@property (retain, nonatomic) VideoCompositionAttr *compositionAttr;
@property (nonatomic) unsigned long long mode;
@property (retain, nonatomic) NSString *videoPath;
@property (retain, nonatomic) NSString *videoDraftPath;
@property (retain, nonatomic) NSString *thumbPath;
@property (retain, nonatomic) UIImage *thumbImg;
@property (retain, nonatomic) NSString *moviePath;
@property (readonly, nonatomic) unsigned int duration;
@property (retain, nonatomic) NSString *originalAssetId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_mode;
+ (void)PBArrayAdd_thumbPath;
+ (void)PBArrayAdd_videoPath;
+ (void)PBArrayAdd_originalAssetId;
+ (void)initialize;
+ (id)draftItemWithThumbImg:(id)a0 andPath:(id)a1 inMode:(unsigned long long)a2;

- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void)dealloc;
- (id)getVideoPath;
- (id)getThumbPath;
- (id)getVideoTmpPathAndCopyIfNeeded;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
