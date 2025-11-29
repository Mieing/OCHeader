@class NSString, NSData;

@interface GOGItemType : WXPBGeneratedMessage

@property (nonatomic) int type;
@property (nonatomic) int int32;
@property (nonatomic) unsigned int uint32;
@property (nonatomic) long long int64;
@property (nonatomic) unsigned long long uint64;
@property (nonatomic) double dbtype;
@property (retain, nonatomic) NSString *str;
@property (retain, nonatomic) NSData *blob;

+ (void)initialize;

@end
