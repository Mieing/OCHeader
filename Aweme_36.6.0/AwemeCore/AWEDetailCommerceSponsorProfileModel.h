@class NSString;

@interface AWEDetailCommerceSponsorProfileModel : AWEDetailCommonDiffableModel <IGListDiffable, AWEDetailRoutable>

@property (copy, nonatomic) NSString *sponsorName;
@property (copy, nonatomic) NSString *sponsorID;
@property (copy, nonatomic) NSString *secSponserID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)routeURLString;
- (void).cxx_destruct;

@end
