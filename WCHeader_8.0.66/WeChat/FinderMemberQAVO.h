@class NSString, NSMutableArray, FinderObject;

@interface FinderMemberQAVO : WXPBGeneratedMessage

@property (nonatomic) unsigned int qaType;
@property (retain, nonatomic) NSMutableArray *favUsers;
@property (retain, nonatomic) NSString *refQContent;
@property (retain, nonatomic) FinderObject *refQObject;

+ (void)initialize;

@end
