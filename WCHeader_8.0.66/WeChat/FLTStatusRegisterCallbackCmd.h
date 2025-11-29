@class NSString, NSMutableArray;

@interface FLTStatusRegisterCallbackCmd : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *cmdId;
@property (retain, nonatomic) NSMutableArray *keyList;

+ (void)initialize;

@end
