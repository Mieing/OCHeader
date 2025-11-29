@class NSString, NSMutableArray;

@interface UDRProjectResourceUpdateMessage : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *projectId;
@property (retain, nonatomic) NSMutableArray *resourceUpdateList;

+ (void)initialize;

@end
