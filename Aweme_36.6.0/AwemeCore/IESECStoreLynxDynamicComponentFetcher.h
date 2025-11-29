@class NSString, NSMutableDictionary;

@interface IESECStoreLynxDynamicComponentFetcher : NSObject <LynxDynamicComponentFetcher>

@property (retain, nonatomic) NSMutableDictionary *runningRequests;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
