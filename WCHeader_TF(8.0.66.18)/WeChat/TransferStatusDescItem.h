@class NSString;

@interface TransferStatusDescItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *value;
@property (nonatomic) unsigned int itemType;
@property (nonatomic) BOOL isSeparateLine;

+ (void)initialize;

@end
