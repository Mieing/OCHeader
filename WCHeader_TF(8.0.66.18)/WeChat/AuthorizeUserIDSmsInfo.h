@class NSString, NSMutableArray;

@interface AuthorizeUserIDSmsInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSMutableArray *phoneList;

+ (void)initialize;

@end
