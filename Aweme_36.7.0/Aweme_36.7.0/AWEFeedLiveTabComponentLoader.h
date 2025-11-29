@class NSArray, UIImageView, NSDictionary, UIView, NSMutableArray;
@protocol AWEFeedLiveTabComponentLoaderProtocol;

@interface AWEFeedLiveTabComponentLoader : NSObject

@property (retain, nonatomic) NSMutableArray *holder;
@property (retain, nonatomic) NSMutableArray *localComponentsHolder;
@property (nonatomic) BOOL componentsHeightChanged;
@property (nonatomic) double heightOfAllComponents;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIView *recordClickView;
@property (retain, nonatomic) NSMutableArray *metaInfoArray;
@property (retain, nonatomic) NSDictionary *componentMappedInfo;
@property (retain, nonatomic) NSDictionary *componentTagInfo;
@property (retain, nonatomic) NSArray *componentPriority;
@property (weak, nonatomic) id<AWEFeedLiveTabComponentLoaderProtocol> delegate;
@property (retain, nonatomic) NSDictionary *landingParams;

- (id)componentStatus;
- (void)viewTransitioningToSize:(struct CGSize { double x0; double x1; })a0;
- (id)componentAssociationClassName:(id)a0;
- (id)componentAssociationMappedInfo;
- (id)activateComponentsWithMetaInfoArray:(id)a0;
- (void)unmountComponentsWithNextRemoteHolder:(id)a0;
- (id)componentClassName:(id)a0;
- (id)componentOfTag:(id)a0;
- (id)componentOfTag:(id)a0 witHolder:(id)a1;
- (void)activeComponentByTags:(id)a0;
- (id)tagFromComponentType:(int)a0;
- (void)registerLocalComponentByTags:(id)a0;
- (void)renderComponentsOnView:(id)a0;
- (void)insertComponentWithMetaInfo:(id)a0 atIndex:(unsigned long long)a1;
- (void)deleteComponentDataWithTagStr:(id)a0;
- (void).cxx_destruct;

@end
