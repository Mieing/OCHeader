@class NSString, IESLiveFastStartLiveViewModel;

@interface IESLiveFastStartLiveServiceImpl : NSObject <IESLiveFastStartLiveService>

@property (retain, nonatomic) IESLiveFastStartLiveViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startLiveWithSourceParams:(id)a0 completion:(id /* block */)a1;
- (id)sourceParams;
- (BOOL)needClean:(id)a0;
- (void).cxx_destruct;
- (void)clear;

@end
