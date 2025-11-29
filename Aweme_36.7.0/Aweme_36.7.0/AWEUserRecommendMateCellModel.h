@class NSString, AWEUserModel;

@interface AWEUserRecommendMateCellModel : NSObject <AWEUserRecommendCellModelProtocol>

@property (retain, nonatomic) AWEUserModel *user;
@property (nonatomic) BOOL hasImpression;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)aweur_cellType;
- (id)aweur_user;
- (void).cxx_destruct;

@end
