@class NSDictionary;
@protocol CachalotRenderPipelineComponentViewModel;

@interface AWEFormatAISearchCardViewModel : NSObject

@property (retain, nonatomic) NSDictionary *attachmentDict;
@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> cachalotViewModel;

- (id)initWithCachalotViewModel:(id)a0;
- (void)trackSearchCardDisplay;
- (void)openFormat:(id)a0 index:(long long)a1;
- (void)trackSearchCardCellDisplay:(id)a0 index:(long long)a1;
- (void)p_postCopedNotification;
- (id)p_secondLevelLogData:(id)a0;
- (id)p_searchTrackCommonParams;
- (id)p_uniqKeyForFormatCard:(id)a0;
- (id)p_searchBizContext;
- (id)p_thirdLevelLogDataWithIndex:(long long)a0;
- (id)p_formatTrackCommonParamsWithFormatInfo:(id)a0;
- (BOOL)p_hasOpenSchema:(id)a0;
- (void)p_setEnterRecord:(id)a0;
- (void).cxx_destruct;

@end
