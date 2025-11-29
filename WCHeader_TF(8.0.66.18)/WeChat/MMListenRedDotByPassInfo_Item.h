@class NSData;

@interface MMListenRedDotByPassInfo_Item : WXPBGeneratedMessage

@property (nonatomic) int cmdId;
@property (retain, nonatomic) NSData *bypassBuffer;
@property (nonatomic) unsigned int clientInsertionType;
@property (nonatomic) int intCmdId;

+ (void)initialize;

@end
