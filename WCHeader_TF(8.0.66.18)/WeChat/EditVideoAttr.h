@class NSString, EditVideoBGMSelectedMusicInfo, NSMutableDictionary, EditImageAttr, NSMutableArray, RecommendedMusicInfo;

@interface EditVideoAttr : MMObject <NSCoding>

@property (copy, nonatomic) NSString *assetUrlForMultiComposeVideo;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } totalEditedTimeRange;
@property (nonatomic) unsigned long long editEntrance;
@property (retain, nonatomic) NSMutableArray *videoSingleAttrs;
@property (nonatomic) BOOL isSelectFromAlbum;
@property (retain, nonatomic) RecommendedMusicInfo *mjPublisherPatMusicInfo;
@property (retain, nonatomic) EditVideoBGMSelectedMusicInfo *musicInfo;
@property (nonatomic) BOOL isOriginSoundOff;
@property (nonatomic) BOOL isCropped;
@property (nonatomic) BOOL isSizeCropped;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropFrame;
@property (nonatomic) BOOL useAssetDurationForCompose;
@property (retain, nonatomic) EditImageAttr *editImageAttr;
@property (nonatomic) BOOL needComposeWithFullVideoTimeCrop;
@property (nonatomic) BOOL isSilenceVideo;
@property (readonly, nonatomic) NSMutableDictionary *extraInfo;

+ (BOOL)isEditedTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 equalToTimeDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)getImageBySize:(struct CGSize { double x0; double x1; })a0;
- (id)getVideoFileSize;
- (BOOL)isCroppedTimeRangeOnly;
- (BOOL)isEdited;
- (BOOL)isMultiComposeVideo;
- (BOOL)isSingleComposeVideo;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })cropTotalDurationOfEachSingleVideoTimeRange;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })editTimeRangeOfVideoAtIndex:(unsigned long long)a0;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })fixedEditTimeRangeOfVideoAtIndex:(unsigned long long)a0;
- (double)editTimeStartForVideoAtIndex:(unsigned long long)a0;
- (double)editTimeEndForVideoAtIndex:(unsigned long long)a0;
- (id)assetURL;
- (void)setAssetURL:(id)a0;
- (void)addMultiVideoAttrWithAssetURL:(id)a0 assetDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 editTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })originDuration;
- (void)setOriginDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })editedTimeRange;
- (void)setEditedTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (id)musicFilePath;
- (void).cxx_destruct;

@end
