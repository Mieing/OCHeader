@class NSString, NSMutableArray;

@interface CreateAIRemind : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSMutableArray *detailArray;
@property (retain, nonatomic) NSString *modifyTodoId;

+ (void)initialize;

@end
