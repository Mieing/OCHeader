@class NSString, NSData;

@interface PageRestoreItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *itemId;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) int bizType;
@property (retain, nonatomic) NSData *userData;
@property (nonatomic) unsigned long long createTime;
@property (retain, nonatomic) NSString *bizName;

+ (void)initialize;

- (void)setBizName:(id)a0;
- (id)bizName;
- (void)setCreateTime:(unsigned long long)a0;
- (unsigned long long)createTime;
- (void)setUserData:(id)a0;
- (id)userData;
- (void)setBizType:(int)a0;
- (int)bizType;
- (void)setTitle:(id)a0;
- (id)title;
- (void)setItemId:(id)a0;
- (id)itemId;

@end
