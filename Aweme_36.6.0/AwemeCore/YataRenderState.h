@class NSArray, NSString, YataRenderData, YataProtocolModel, YataRootModel;

@interface YataRenderState : NSObject <YataState>

@property (retain, nonatomic) YataRootModel *rootModel;
@property (readonly, nonatomic) YataProtocolModel *currentMergedDownLinkData;
@property (readonly, nonatomic) YataRenderData *renderData;
@property (retain, nonatomic) NSArray *popupArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
