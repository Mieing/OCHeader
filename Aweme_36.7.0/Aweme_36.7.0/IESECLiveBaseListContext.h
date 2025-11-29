@protocol IESECLiveListReloadProtocol, IESECLiveListSectionProtocol;

@interface IESECLiveBaseListContext : IESECLiveBaseContext

@property (weak, nonatomic) id<IESECLiveListReloadProtocol> listDelegate;
@property (weak, nonatomic) id<IESECLiveListSectionProtocol> sectionDelegate;

- (void).cxx_destruct;

@end
