@class NSString;

@interface SourceImgInfo : NSObject <PBCoding>

@property (copy, nonatomic) NSString *imgSourceUrl;
@property (nonatomic) unsigned int bizType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)finderSupportSourceUrl;
+ (void)PBArrayAdd_imgSourceUrl;
+ (void)PBArrayAdd_bizType;
+ (void)initialize;
+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;

- (id)finderQueryDict;
- (id)_finderSourceUrlQuery;
- (BOOL)isFinderPreviewMsg;
- (BOOL)finderShowSourceInImagePreview;
- (BOOL)isGloablSnapshotForward;
- (id)showImagePreviewSourceTips;
- (id)finderPreviewMsgTips;
- (id)snapshotType;
- (id)finderPreviewIconName;
- (void)finderPreviewLonePressActionSheetTitle:(id *)a0 icon:(id *)a1;
- (void)finderJumpPreviewFromVC:(id)a0 source:(long long)a1 enterType:(unsigned long long)a2;
- (id)getPBPropertyTable;
- (BOOL)isValid;
- (id)toXML;
- (id)imagePreviewDisplayJumpSourceTitle;
- (BOOL)imagePreviewEnableClickTailLink;
- (BOOL)imageMessageSourceBubbleAlignRight;
- (id)imageMessageDisplaySourceTitle;
- (id)imageMessageDisplaySourceIcon:(struct CGSize { double x0; double x1; })a0 color:(id)a1;
- (BOOL)imageMessageEnableClickSourceTitle;
- (void).cxx_destruct;

@end
