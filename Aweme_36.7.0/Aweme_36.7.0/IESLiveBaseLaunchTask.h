@class NSString;

@interface IESLiveBaseLaunchTask : NSObject <IESLiveLaunchTaskProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)excute;
- (id)name;

@end
