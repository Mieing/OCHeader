@class AWEInnerPushCommonViewContentAreaModel, AWEInnerPushCommonViewRightActionAreaModel, AWEInnerPushCommonViewLeftIconModel, AWEInnerPushCommonViewTitleAreaModel, AWEInnerPushCommonViewLeftExtraIconModel;

@interface AWEInnerPushCommonViewModel : NSObject

@property (nonatomic) unsigned long long pushViewHeightEnum;
@property (retain, nonatomic) AWEInnerPushCommonViewLeftIconModel *leftIconModel;
@property (retain, nonatomic) AWEInnerPushCommonViewLeftExtraIconModel *leftExtraIconModel;
@property (retain, nonatomic) AWEInnerPushCommonViewTitleAreaModel *titleAreaModel;
@property (retain, nonatomic) AWEInnerPushCommonViewContentAreaModel *contentAreaModel;
@property (retain, nonatomic) AWEInnerPushCommonViewRightActionAreaModel *rightActionAreaModel;

- (void).cxx_destruct;

@end
