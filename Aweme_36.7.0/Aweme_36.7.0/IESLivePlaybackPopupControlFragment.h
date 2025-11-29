@class RACDisposable, NSString;

@interface IESLivePlaybackPopupControlFragment : IESLivePlaybackComponent <IESLivePlaybackComponentLifeCycle>

@property (retain, nonatomic) RACDisposable *disposable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMount;
- (void)componentDidUnmount;
- (void).cxx_destruct;

@end
