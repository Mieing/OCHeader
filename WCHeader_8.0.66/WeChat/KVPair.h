@class NSString;

@interface KVPair : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *value;
@property (nonatomic) unsigned int itemType;
@property (nonatomic) BOOL isSeparateLine;
@property (retain, nonatomic) NSString *valueText;

+ (void)initialize;

@end
