@class NSString, FinderObject;

@interface JumpToShowProfileByNickNameReq : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) FinderObject *object;
@property (nonatomic) unsigned int enterType;

+ (void)initialize;

@end
