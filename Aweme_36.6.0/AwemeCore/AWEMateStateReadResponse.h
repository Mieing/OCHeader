@class AWECodeGenMateRelationModel;

@interface AWEMateStateReadResponse : AWESocialRelationResponse

@property (nonatomic) BOOL isMate;
@property (retain, nonatomic) AWECodeGenMateRelationModel *mateRelation;

- (void).cxx_destruct;

@end
