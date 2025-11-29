@class NSString, NSMutableArray;

@interface TagCtrlInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *publishUsername;
@property (retain, nonatomic) NSString *commentUserName;
@property (nonatomic) unsigned int source;
@property (nonatomic) unsigned int contentType;
@property (retain, nonatomic) NSString *contentId;
@property (retain, nonatomic) NSMutableArray *extParams;

+ (void)initialize;

@end
