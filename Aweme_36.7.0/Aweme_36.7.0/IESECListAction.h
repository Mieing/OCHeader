@class IESECJumpActionMeta, IESECBizActionMeta;

@interface IESECListAction : GPBMessage

@property (nonatomic) long long actionType;
@property (retain, nonatomic) IESECBizActionMeta *bizAction;
@property (nonatomic) BOOL hasBizAction;
@property (retain, nonatomic) IESECJumpActionMeta *jumpAction;
@property (nonatomic) BOOL hasJumpAction;

+ (id)descriptor;

@end
