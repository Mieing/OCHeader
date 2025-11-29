@class NSString, NSMutableArray, NSDictionary;
@protocol AWECommonFeedFullScreenDetailDelegate, AWECommonFeedContainerTransitionManagerProtocol, AWECommonFeedDelegate;

@interface AWECommonFeedBaseConfigManager : NSObject <AWECommonFeedConfigProtocol>

@property (retain, nonatomic) NSMutableArray *feedSectionViewModelList;
@property (retain, nonatomic) NSMutableArray *feedSectionControllerList;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (nonatomic) BOOL invalidateContainerPageAutoPlayControl;
@property (weak, nonatomic) id<AWECommonFeedFullScreenDetailDelegate> fullScreenDetailDelegate;
@property (weak, nonatomic) id<AWECommonFeedDelegate> delegate;
@property (retain, nonatomic) id<AWECommonFeedContainerTransitionManagerProtocol> transitionManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configSection;
- (id)cardModelsWithRawDataArray:(id)a0 dataHandler:(id /* block */)a1;
- (id)sectionViewModelClassNameList;
- (id)sectionControllerClassNameList;
- (id)cellModelsClassNameArrayForSectionViewModel:(id)a0 cardModel:(id)a1;
- (id)cellClassesNameArrayForSectionViewModel:(id)a0 cardModel:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
