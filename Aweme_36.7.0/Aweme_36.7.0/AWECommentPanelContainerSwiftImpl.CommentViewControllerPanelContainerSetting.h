@interface AWECommentPanelContainerSwiftImpl.CommentViewControllerPanelContainerSetting : NSObject <AWECommentViewControllerPanelContainerSettingProtocol> {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ container;
}

@property (nonatomic) BOOL useExternalCommentHeightRatio;
@property (nonatomic) double commentHeightRatio;
@property (nonatomic) unsigned long long commentPanelHeightScreenRatio;
@property (nonatomic) BOOL needBlackBackgroundMask;
@property (nonatomic) BOOL isViewingOnly;

- (void)resetCommentVCStatus:(id)a0;
- (void)commentVCRefresh;
- (void).cxx_destruct;
- (id)init;

@end
