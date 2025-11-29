@class NSString, NSMutableArray;

@interface GuideInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSMutableArray *guideList;
@property (retain, nonatomic) NSString *moreTitle;
@property (retain, nonatomic) NSString *moreUrl;

+ (void)initialize;

@end
