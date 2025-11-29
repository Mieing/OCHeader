@class EmotionLinkInfo, NSString;

@interface MMStoreEmoticonPreviewCell : MMStoreEmotionBaseAllCell <MMEmoticonStoreDownloadLogicDelegate, EmoticonStoreItemExt>

@property (nonatomic) BOOL disableDownload;
@property (retain, nonatomic) EmotionLinkInfo *linkInfo;
@property (nonatomic) BOOL didLoadCacheLinkInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setMsgBrowseStyleWithDownloadable:(BOOL)a0;
- (id)downloadLogicConfig;
- (void)updateStoreItem:(id)a0;
- (void)updateWithLinkInfo:(id)a0;
- (void)updateLinkInfoLayout;
- (void)updateNameWithArrow;
- (void)OnEmoticonStoreItemChanged:(id)a0;
- (void)layoutSubviews;
- (void)layoutBaseViewContainer;
- (void)updateAccessibilityLabel;
- (void).cxx_destruct;

@end
