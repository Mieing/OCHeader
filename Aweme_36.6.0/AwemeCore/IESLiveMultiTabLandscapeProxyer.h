@class NSString;

@interface IESLiveMultiTabLandscapeProxyer : NSObject <IESLiveMultiTabViewDelegate>

@property (copy, nonatomic) id /* block */ tabIdChangeAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
