@class NSString, FinderObject, NSData;

@interface CardOptionReq : WXPBGeneratedMessage

@property (retain, nonatomic) FinderObject *object;
@property (nonatomic) BOOL isAuthor;
@property (nonatomic) unsigned int postState;
@property (retain, nonatomic) NSString *localFeedId;
@property (nonatomic) BOOL isInnerUser;
@property (retain, nonatomic) NSData *thumbData;
@property (retain, nonatomic) NSString *disableSharingPrompts;
@property (retain, nonatomic) NSString *sourceTag;
@property (nonatomic) BOOL isConnect;
@property (nonatomic) unsigned int commentScene;

+ (void)initialize;

@end
