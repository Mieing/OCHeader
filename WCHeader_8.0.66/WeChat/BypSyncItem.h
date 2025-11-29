@class NSData;

@interface BypSyncItem : WXPBGeneratedMessage

@property (nonatomic) unsigned int syncKeyType;
@property (nonatomic) unsigned int itemType;
@property (retain, nonatomic) NSData *buff;
@property (nonatomic) unsigned int subType;

+ (void)initialize;

@end
