@class AWEMixVideoModel, AWEMixDetailInformationTracker;

@interface AWEMixDetailInformationPageContext : AWEPageContext

@property (retain, nonatomic) AWEMixVideoModel *mixVideoModel;
@property (nonatomic) BOOL fromPersonPage;
@property (retain, nonatomic) AWEMixDetailInformationTracker *tracker;

- (void).cxx_destruct;

@end
