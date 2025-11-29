@class NSString, SugResult_ClientControlInfo, NSData, NSMutableArray;

@interface SugResult : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) NSData *debugInfo;
@property (retain, nonatomic) NSString *extInfo;
@property (retain, nonatomic) SugResult_ClientControlInfo *clientCtrlInfo;
@property (retain, nonatomic) NSString *ctx;

+ (void)initialize;

@end
