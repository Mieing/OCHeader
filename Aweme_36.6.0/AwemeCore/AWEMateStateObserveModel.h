@class AWECodeGenMateRelationModel, AWEUserModel;

@interface AWEMateStateObserveModel : NSObject

@property (retain, nonatomic) AWECodeGenMateRelationModel *originalMateRelation;
@property (retain, nonatomic) AWECodeGenMateRelationModel *updatedMateRelation;
@property (retain, nonatomic) AWEUserModel *userModel;

- (void).cxx_destruct;

@end
