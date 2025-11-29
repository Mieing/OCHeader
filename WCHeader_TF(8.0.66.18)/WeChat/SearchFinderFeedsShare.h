@class NSString, NSMutableArray;

@interface SearchFinderFeedsShare : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *tid;
@property (nonatomic) unsigned int feedType;
@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSString *avatar;
@property (retain, nonatomic) NSString *nonceId;
@property (nonatomic) unsigned int mediaCount;
@property (retain, nonatomic) NSMutableArray *mediaList;

+ (void)initialize;

@end
