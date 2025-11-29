@class UIViewController;
@protocol ACCMVTemplatesDetailTableViewController, ACCMVTemplatesDataControllerProtocol;

@interface AWEFavoriteTemplatesDetailPageController : NSObject

@property (retain, nonatomic) id<ACCMVTemplatesDataControllerProtocol> dataController;
@property (retain, nonatomic) UIViewController<ACCMVTemplatesDetailTableViewController> *detailVC;
@property (nonatomic) long long initIndex;
@property (nonatomic) BOOL isMergeTab;

+ (id)p_cutsameEnterAlbumWithTemplateModel:(id)a0;
+ (id)p_pixelEnterAlbumWithTemplateModel:(id)a0;

- (id)initWithDataController:(id)a0 initIndex:(long long)a1 isMergeTab:(BOOL)a2;
- (void)enterTemplateDetail;
- (void)p_setupDetailVCCallback;
- (void).cxx_destruct;

@end
