@class NSArray, NSString, AWESearchAIGCVideoRSResponseModel;
@protocol AWESearchAIGCInputVideoRSPanelViewModelDelegate;

@interface AWESearchAIGCInputVideoRSPanelViewModel : NSObject <AWESearchAIGCInputVideoRSPanelAction>

@property (retain, nonatomic) AWESearchAIGCVideoRSResponseModel *videoRSResponseModel;
@property (weak, nonatomic) id<AWESearchAIGCInputVideoRSPanelViewModelDelegate> delegate;
@property (nonatomic) long long currentShowCount;
@property (readonly, copy, nonatomic) NSArray *unUsedRSList;
@property (nonatomic) BOOL isShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithVideoRSResponseModel:(id)a0 delegate:(id)a1;
- (void)updateUnUsedRSListWithUsedModel:(id)a0;
- (void)setVideoRSPanelIsShowing:(BOOL)a0;
- (id)videoRSPanelResponseModel;
- (void)videoRSPanelAddShowCount;
- (long long)videoRSPanelCurrentShowCount;
- (BOOL)videoRSPanelIsShowing;
- (void)updateUnUsedRSList;
- (void).cxx_destruct;

@end
