@class AWEDanmakuItemDiggInfo, NSString, AWEDanmakuItemPrefixImageInfo, AWEVideoPlayDanmakuModel, AWEDanmakuItemTextInfo, SkityTextBlob, AWEDanmakuItemBackgroundInfo;

@interface AWEDanmakuItemNode : NSObject <DDanmakuItemNodeProtocol>

@property (retain, nonatomic) AWEVideoPlayDanmakuModel *danmakuModel;
@property (retain, nonatomic) SkityTextBlob *textBlob;
@property (copy, nonatomic) NSString *itemType;
@property (nonatomic) long long danmakuType;
@property (nonatomic) BOOL hidden;
@property (nonatomic) double alpha;
@property (retain, nonatomic) AWEDanmakuItemPrefixImageInfo *prefixImageInfo;
@property (retain, nonatomic) AWEDanmakuItemTextInfo *textInfo;
@property (retain, nonatomic) AWEDanmakuItemDiggInfo *diggInfo;
@property (retain, nonatomic) AWEDanmakuItemBackgroundInfo *backgroundInfo;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } dmk_frame;
@property (nonatomic) struct CGSize { double width; double height; } dmk_size;
@property (nonatomic) double dmk_left;
@property (nonatomic) double dmk_right;
@property (nonatomic) double dmk_width;
@property (nonatomic) double dmk_height;
@property (nonatomic) double dmk_centerY;
@property (nonatomic) double dmk_topY;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)borderPaint;
+ (id)borderGroundPaint;

- (void)updateWithDescriptor:(id)a0;
- (void)refreshDanmakuInfoInNeed;
- (void)configDanmakuPrefixImageIfNeed;
- (void)configDanmakuTextInfo;
- (void)configDanmakuBackgroundInfoIfNeed;
- (void)configDanmakuDiggInfoIfNeed;
- (id)danmakuEmojiAttachmentWithText:(id)a0 skityContext:(id)a1;
- (void)drawBackgroundIfNeedWithCanvas:(id)a0 metalInfo:(id)a1;
- (void)drawPrefixImageIfNeedWithCanvas:(id)a0 metalInfo:(id)a1 skityContext:(id)a2;
- (void)drawDiggIfNeedWithCanvas:(id)a0 metalInfo:(id)a1 skityContext:(id)a2;
- (id)createSkityImage:(id)a0 withContext:(id)a1;
- (void)drawDanmaku:(id)a0 canvas:(id)a1 skityContext:(id)a2;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithItemType:(id)a0;

@end
