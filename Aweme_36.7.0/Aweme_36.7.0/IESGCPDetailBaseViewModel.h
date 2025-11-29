@class NSDictionary, IESGCPDetailData, IESGCPDetailContentNode;
@protocol IESGCPGameDetailViewModelProtocol;

@interface IESGCPDetailBaseViewModel : NSObject

@property (weak, nonatomic) id<IESGCPGameDetailViewModelProtocol> gameDetailViewModel;
@property (retain, nonatomic) IESGCPDetailData *data;
@property (retain, nonatomic) IESGCPDetailContentNode *content;
@property (nonatomic) double maxWidth;
@property (readonly, copy, nonatomic) NSDictionary *hasDisplayExtraParams;

- (id)enterFrom;
- (void)trackEvent:(id)a0 extra:(id)a1;
- (void)trackShowForStrategy;
- (id)reportParamsWithExtra:(id)a0;
- (unsigned long long)promoteScene;
- (BOOL)useHalfScreenConfig;
- (void)collectDisplayParams;
- (void)setDetailData:(id)a0 nodeData:(id)a1;
- (BOOL)isAudienceDetailFullScreen;
- (BOOL)isDetailLynxCard;
- (void).cxx_destruct;

@end
