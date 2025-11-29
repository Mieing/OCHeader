@class AWECodeGenMateRelationModel;

@interface AWEAddMateResponse : AWESocialRelationResponse

@property (retain, nonatomic) AWECodeGenMateRelationModel *mateInfo;
@property (nonatomic) long long followStatus;

- (void).cxx_destruct;

@end
