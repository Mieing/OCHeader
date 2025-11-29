@interface UserDataListItem : WXPBGeneratedMessage

@property (nonatomic) unsigned int dataType;
@property (nonatomic) unsigned int businessType;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int dataCount;

+ (void)initialize;

@end
