@class NSString, FinderColumnPostConfig;

@interface FinderColumnInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int columnId;
@property (retain, nonatomic) NSString *columnBuffer;
@property (retain, nonatomic) NSString *columnSessionBuffer;
@property (retain, nonatomic) FinderColumnPostConfig *postConfig;

+ (void)initialize;

@end
