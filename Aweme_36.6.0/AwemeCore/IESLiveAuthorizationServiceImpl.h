@class NSString, IESLiveAuthorizationApi;
@protocol IESLiveAuthorizationControllerProvider;

@interface IESLiveAuthorizationServiceImpl : NSObject <IESLiveAuthorizationService>

@property (retain, nonatomic) IESLiveAuthorizationApi *api;
@property (retain, nonatomic) id<IESLiveAuthorizationControllerProvider> authorizationService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
