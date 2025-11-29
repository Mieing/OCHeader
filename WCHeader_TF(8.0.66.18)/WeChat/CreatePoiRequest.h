@class BaseRequest, NSString, LbsLocation, NSMutableArray;

@interface CreatePoiRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *district;
@property (retain, nonatomic) NSString *street;
@property (retain, nonatomic) LbsLocation *loc;
@property (nonatomic) unsigned int count;
@property (retain, nonatomic) NSMutableArray *categories;
@property (retain, nonatomic) NSString *telephone;
@property (retain, nonatomic) NSString *photoUrl;

+ (void)initialize;

@end
