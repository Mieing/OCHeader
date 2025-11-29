@class NSString, NSData;

@interface MMListenDiscoverResponse_ReddotItem : WXPBGeneratedMessage

@property (nonatomic) int type;
@property (retain, nonatomic) NSString *discoverId;
@property (retain, nonatomic) NSString *categoryId;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSData *clientBuffer;

+ (void)initialize;

@end
