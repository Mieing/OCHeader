@class NSData, NSMutableArray, UserGrantInterfaceConfig;

@interface GetUserGrantInfoBuffer : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *userGrantInfoList;
@property (retain, nonatomic) NSData *contextBuffer;
@property (retain, nonatomic) UserGrantInterfaceConfig *interfaceConfig;

+ (void)initialize;

@end
