@class NSString, NSMutableArray;

@interface MultiIconReason : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *iconList;
@property (retain, nonatomic) NSString *postfix;

+ (void)initialize;

- (void)setPostfix:(id)a0;
- (id)postfix;
- (void)setIconList:(id)a0;
- (id)iconList;

@end
