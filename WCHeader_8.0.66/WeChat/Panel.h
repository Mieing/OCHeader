@class NSString, JumpInfo;

@interface Panel : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *icon;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) JumpInfo *jumpInfo;

+ (void)initialize;

@end
