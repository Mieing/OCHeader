@class NSData, NSMutableArray;

@interface SetUserGrantInfoBuffer : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *userGrantInfoList;
@property (retain, nonatomic) NSData *contextBuffer;
@property (nonatomic) unsigned int submitValue;

+ (void)initialize;

@end
