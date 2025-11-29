@class NSString, IESGCPApi;

@interface IESGCPAnchorPromotionUtil : NSObject <IESGCPAnchorPromotionInterface>

@property (retain, nonatomic) IESGCPApi *api;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)getAnchorPromotionGameIDsWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
