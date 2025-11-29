@class NSString, NSMutableArray;

@interface PoiReview : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *category;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) unsigned int count;
@property (retain, nonatomic) NSString *photoUrl;
@property (retain, nonatomic) NSMutableArray *content;

+ (void)initialize;

@end
