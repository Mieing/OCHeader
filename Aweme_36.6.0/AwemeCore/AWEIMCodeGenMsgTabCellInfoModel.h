@class NSString;

@interface AWEIMCodeGenMsgTabCellInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *cellType;
@property (nonatomic) long long topState;
@property (nonatomic) long long setTopTime;
@property (nonatomic) long long cancelTopTime;
@property (nonatomic) long long cellDeleteTime;
@property (nonatomic) long long cellNotDisplayTime;
@property (nonatomic) int muteState;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
