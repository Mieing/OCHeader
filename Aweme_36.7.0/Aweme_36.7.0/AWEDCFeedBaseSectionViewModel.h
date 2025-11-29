@class NSString, NSDictionary, AWEDCFeedConfig, AWEDCFeedPageContext;

@interface AWEDCFeedBaseSectionViewModel : AWEBaseListSectionViewModel <AWEDCFeedSectionViewModelProtocol>

@property (weak, nonatomic) AWEDCFeedConfig *config;
@property (weak, nonatomic) AWEDCFeedPageContext *context;
@property (nonatomic) long long index;
@property (nonatomic) double height;
@property (nonatomic) double tidyHeight;
@property (nonatomic) BOOL isShowing;
@property (copy, nonatomic) NSDictionary *feedbackInfo;
@property (retain, nonatomic) id bizContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupWithPayload:(id)a0;
- (void)replaceByModels:(id)a0 animated:(BOOL)a1 sync:(BOOL)a2;
- (void).cxx_destruct;

@end
