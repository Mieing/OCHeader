@class UIImageView, NSString, AWEPOILynxContainerView;

@interface POIMediaListLynxCell : POIMediaListCell <AWEPOICubeViewDelegate>

@property (retain, nonatomic) AWEPOILynxContainerView *lynxContentView;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (copy, nonatomic) NSString *backgroundImageURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithMediaModel:(id)a0;
- (void)didSetInteractorContainer;
- (id)cubeManager;
- (void).cxx_destruct;
- (void)prepareForReuse;

@end
