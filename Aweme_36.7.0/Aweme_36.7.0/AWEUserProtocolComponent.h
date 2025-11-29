@class NSString, AWEUserLoginProtocolView;

@interface AWEUserProtocolComponent : NSObject <AWEUserContainerProtocolComponentProtocol>

@property (retain, nonatomic) AWEUserLoginProtocolView *contentView;
@property (nonatomic) BOOL isShowingAlert;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupComponentView;
- (void)checkConfirmedProtocolWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (unsigned long long)componentType;
- (id)componentView;

@end
