@class IESGCPPropDataAuthAPI;

@interface IESGCPPropAuthorizationViewModel : NSObject

@property (nonatomic) int gamePropsAuthStatus;
@property (retain, nonatomic) IESGCPPropDataAuthAPI *api;

- (id)reportParamsWithExtra:(id)a0;
- (void)agreeAuthorizationWithCallBack:(id /* block */)a0;
- (void)fetchGamePropsAuthStatus;
- (void)initPropsViewModel;
- (void).cxx_destruct;

@end
