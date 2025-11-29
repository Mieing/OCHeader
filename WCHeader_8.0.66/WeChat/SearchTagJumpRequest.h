@class NSString, KeyValueList;

@interface SearchTagJumpRequest : WXPBGeneratedMessage

@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *query;
@property (nonatomic) unsigned int h5Version;
@property (retain, nonatomic) KeyValueList *kvList;

+ (void)initialize;

@end
