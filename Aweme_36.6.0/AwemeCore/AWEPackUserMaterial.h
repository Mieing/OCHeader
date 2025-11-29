@class AFDLocalUserModel, AWELocalDBUserModel, AFDLocalFollowModel, NSNumber, AFDLocalMateModel;

@interface AWEPackUserMaterial : AWEPackMaterial

@property (retain, nonatomic) AFDLocalUserModel *baseInfo;
@property (retain, nonatomic) AWELocalDBUserModel *baseInfoFromOldUC;
@property (retain, nonatomic) AFDLocalMateModel *mate;
@property (retain, nonatomic) NSNumber *notShow;
@property (retain, nonatomic) NSNumber *notOtherShow;
@property (retain, nonatomic) NSNumber *reverseNotOtherShow;
@property (retain, nonatomic) NSNumber *block;
@property (retain, nonatomic) NSNumber *reverseBlock;
@property (retain, nonatomic) NSNumber *familiarConfidence;
@property (retain, nonatomic) AFDLocalFollowModel *follow;
@property (retain, nonatomic) NSNumber *closeFriend;

- (void).cxx_destruct;

@end
