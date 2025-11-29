@class NSString, NSMutableArray;

@interface RegisterCallbackCmd : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *cmdId;
@property (retain, nonatomic) NSMutableArray *keyList;

+ (void)initialize;

@end
