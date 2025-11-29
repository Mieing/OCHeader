@class NSString;

@interface MMListenCircleCategoryInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *categoryId;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subTitle;
@property (retain, nonatomic) NSString *cover;
@property (nonatomic) int type;
@property (nonatomic) int listType;
@property (retain, nonatomic) NSString *author;
@property (retain, nonatomic) NSString *desc;

+ (void)initialize;

@end
