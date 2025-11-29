@class FinderObject;

@interface FinderStreamRerankObject : WXPBGeneratedMessage

@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) FinderObject *object;
@property (nonatomic) unsigned int rerankType;

+ (void)initialize;

@end
