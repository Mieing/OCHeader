@class NSString, NSMutableArray;

@interface SnsTag : WXPBGeneratedMessage

@property (nonatomic) unsigned long long tagId;
@property (retain, nonatomic) NSString *tagName;
@property (nonatomic) unsigned int count;
@property (retain, nonatomic) NSMutableArray *list;

+ (void)initialize;

@end
