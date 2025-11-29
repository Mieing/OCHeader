@class AWEIMActionSheetItemModel;

@interface IESIMMessageListActionPublishComponent : AWEIMComponentBase <AWEIMMessageListActionPublishInterface> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_shareItemModel;
}

@property (nonatomic, retain) AWEIMActionSheetItemModel *shareItemModel;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (BOOL)featureEnable;
- (void)hostVC_afterFirstRender;
- (void).cxx_destruct;
- (id)init;

@end
