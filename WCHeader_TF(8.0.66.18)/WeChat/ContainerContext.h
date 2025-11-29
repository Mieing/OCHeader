@class NSData, NSMutableArray;

@interface ContainerContext : WXPBGeneratedMessage

@property (nonatomic) unsigned int containerId;
@property (retain, nonatomic) NSData *containerLastBuffer;
@property (retain, nonatomic) NSMutableArray *readIds;
@property (nonatomic) unsigned int cardNum;

+ (void)initialize;

@end
