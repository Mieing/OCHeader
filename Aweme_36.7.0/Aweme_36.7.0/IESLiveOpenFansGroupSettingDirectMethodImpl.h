@protocol IESLiveIMServiceAdapter, IESLivePlayTogetherGroupSettingPageService, IESLiveFansGroupAction;

@interface IESLiveOpenFansGroupSettingDirectMethodImpl : IESLiveOpenFansGroupSettingDirectMethod

@property (retain, nonatomic) id<IESLiveFansGroupAction> actionCreator;
@property (retain, nonatomic) id<IESLiveIMServiceAdapter> imService;
@property (retain, nonatomic) id<IESLivePlayTogetherGroupSettingPageService> fansGroupService;

- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;

@end
