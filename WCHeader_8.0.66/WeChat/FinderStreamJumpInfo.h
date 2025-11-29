@class NSData, FinderObject;

@interface FinderStreamJumpInfo : WXPBGeneratedMessage

@property (retain, nonatomic) FinderObject *object;
@property (nonatomic) unsigned int jumpType;
@property (retain, nonatomic) NSData *jumpExtInfo;

+ (void)initialize;

@end
