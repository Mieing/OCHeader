@interface AWECodeGenMateRelationModel : AWEBaseDataModel

@property (nonatomic) int mateStatus;
@property (nonatomic) int mateApplyForward;
@property (nonatomic) int mateApplyReverse;
@property (nonatomic) long long mateCreateTime;
@property (nonatomic) long long mateApplyUid;

+ (id)JSONKeyPathsByPropertyKey;

@end
