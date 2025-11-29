@class NSString, AWEIMImageEditService;
@protocol AWEIMAwemeMediaImageDownloader;

@interface AWEIMMenuEditMediaComponent : AWEIMComponentBase <AWEIMMessageListMenuProtocol>

@property (retain, nonatomic) id<AWEIMAwemeMediaImageDownloader> imageLoader;
@property (retain, nonatomic) AWEIMImageEditService *editService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canShowItemWithMessage:(id)a0 context:(id)a1;
- (id)menuItemTitle:(id)a0 context:(id)a1;
- (id)menuItemImageName:(id)a0 context:(id)a1;
- (id)menuItemLightImageURL:(id)a0 context:(id)a1;
- (id)menuItemDarkImageURL:(id)a0 context:(id)a1;
- (id)menuTrackerName:(id)a0 context:(id)a1;
- (unsigned long long)menuItemType;
- (void)didClickItemWithMessage:(id)a0 context:(id)a1;
- (void).cxx_destruct;

@end
