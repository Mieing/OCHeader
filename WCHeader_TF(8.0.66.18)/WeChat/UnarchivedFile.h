@class NSString, NSMutableArray;

@interface UnarchivedFile : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *name;
@property (nonatomic) int type;
@property (nonatomic) long long size;
@property (nonatomic) long long mtime;
@property (nonatomic) int limitedBy;
@property (retain, nonatomic) NSMutableArray *files;

+ (void)initialize;

@end
