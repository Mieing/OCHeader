@class NSString, NSMutableArray;

@interface Rank : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSMutableArray *rankList;
@property (retain, nonatomic) NSString *moreTitle;
@property (retain, nonatomic) NSString *moreUrl;
@property (retain, nonatomic) NSString *rankTitle;
@property (retain, nonatomic) NSString *myDesc;

+ (void)initialize;

@end
