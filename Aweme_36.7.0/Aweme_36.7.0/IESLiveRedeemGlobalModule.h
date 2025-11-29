@class NSString;
@protocol IESLiveRedeemService;

@interface IESLiveRedeemGlobalModule : IESLiveModule <IESLiveRedeemGlobalModule>

@property (retain, nonatomic) id<IESLiveRedeemService> redeemManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)redeemInterface;
- (void).cxx_destruct;

@end
