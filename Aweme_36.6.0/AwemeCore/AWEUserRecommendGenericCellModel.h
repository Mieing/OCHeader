@class NSString, AWEUserModel;

@interface AWEUserRecommendGenericCellModel : NSObject <AWEUserRecommendCellModelProtocol>

@property (nonatomic) long long aweur_cellType;
@property (retain, nonatomic) AWEUserModel *aweur_user;
@property (nonatomic) BOOL hasImpression;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithType:(long long)a0 user:(id)a1;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0;

@end
