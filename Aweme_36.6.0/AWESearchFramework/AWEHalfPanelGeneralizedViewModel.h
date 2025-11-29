@class NSDictionary, NSString, AWEAwemeModel;
@protocol AWESearchHalfPanelInteractionProtocal;

@interface AWEHalfPanelGeneralizedViewModel : NSObject <AWESearchHalfPanelViewModelProtocol>

@property (nonatomic) double startTimestamp;
@property (nonatomic) double endTimestamp;
@property (weak, nonatomic) id<AWESearchHalfPanelInteractionProtocal> delegate;
@property (retain, nonatomic) NSDictionary *logParamDict;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackParamsWithButtonType:(id)a0;
- (void)trackWhenClickExit;
- (void)trackWhenClickHeader;
- (void)trackWhenSlideExit;
- (void)trackWhenSwitchWithTrackDict:(id)a0;
- (void)trackWhenShow;
- (void).cxx_destruct;

@end
