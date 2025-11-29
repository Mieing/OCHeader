@class NSString;
@protocol AWECommerceTimeProgressService;

@interface AWEPlayVideoStatusCheckerHelper : HTSService <AWEPlayVideoStatusCheckerHelper>

@property (weak, nonatomic) id<AWECommerceTimeProgressService> commerceTimeProgressService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
