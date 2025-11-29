@class NSString, LbsLocationNew, NSMutableArray;

@interface SearchDetailPageRequest : WXPBGeneratedMessage

@property (nonatomic) unsigned long long businessType;
@property (retain, nonatomic) NSString *keyWord;
@property (nonatomic) unsigned int offset;
@property (retain, nonatomic) LbsLocationNew *location;
@property (nonatomic) unsigned int requestSrc;
@property (retain, nonatomic) NSMutableArray *matchUserList;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *searchId;

+ (void)initialize;

@end
