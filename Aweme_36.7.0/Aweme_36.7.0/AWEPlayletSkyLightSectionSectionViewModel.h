@class NSDictionary, AWEPlayletPageContext;

@interface AWEPlayletSkyLightSectionSectionViewModel : AWEBaseListSectionViewModel

@property (retain, nonatomic) NSDictionary *lynxDataDic;
@property (nonatomic) double lynxHeight;
@property (retain, nonatomic) AWEPlayletPageContext *context;
@property (copy, nonatomic) id /* block */ cardHeightDidChange;

- (void)fetchSectionData;
- (void)loadMoreSectionData;
- (void).cxx_destruct;
- (id)init;

@end
