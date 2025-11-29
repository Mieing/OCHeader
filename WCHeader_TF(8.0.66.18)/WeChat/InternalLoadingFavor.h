@class NSString;
@protocol InternalLoadingFavorDelegate;

@interface InternalLoadingFavor : NSObject <WCPayBusiF2FGetFavorCgiDelegate>

@property (weak, nonatomic) id<InternalLoadingFavorDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onWCPayBusiF2FGetFavorCgiResp:(id)a0;
- (void)onWCPayBusiF2FGetFavorCgiError:(id)a0;
- (void).cxx_destruct;

@end
