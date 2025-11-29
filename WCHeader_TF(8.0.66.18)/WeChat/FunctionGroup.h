@class WalletGroupInfo, NSMutableArray;

@interface FunctionGroup : WXPBGeneratedMessage

@property (retain, nonatomic) WalletGroupInfo *groupInfo;
@property (retain, nonatomic) NSMutableArray *functionList;

+ (void)initialize;

@end
