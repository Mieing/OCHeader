@class NSString;

@interface SearchBrandFeedsShare : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *thumbUrl;
@property (retain, nonatomic) NSString *link;
@property (nonatomic) unsigned int itemShowType;
@property (retain, nonatomic) NSString *sourceUsername;
@property (retain, nonatomic) NSString *sourceDisplayName;
@property (retain, nonatomic) NSString *vid;
@property (nonatomic) unsigned int duraion;
@property (nonatomic) unsigned int width;
@property (nonatomic) unsigned int height;

+ (void)initialize;

@end
