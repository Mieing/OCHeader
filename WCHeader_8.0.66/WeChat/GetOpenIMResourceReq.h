@class NSString, NSMutableArray;

@interface GetOpenIMResourceReq : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *language;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSMutableArray *wordingId;
@property (nonatomic) unsigned int subtype;

+ (void)initialize;

@end
