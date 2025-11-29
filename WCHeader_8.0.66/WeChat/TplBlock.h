@class NSString, JumpInfo;

@interface TplBlock : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) JumpInfo *jumpInfo;
@property (retain, nonatomic) NSString *username;
@property (nonatomic) BOOL canBeAt;

+ (void)initialize;

@end
