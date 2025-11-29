@class AWEUserModel;

@interface AWEUserRecommendCellModel : NSObject <IGListDiffable>

@property (retain, nonatomic) AWEUserModel *user;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (id)recommendReason;
- (void).cxx_destruct;

@end
