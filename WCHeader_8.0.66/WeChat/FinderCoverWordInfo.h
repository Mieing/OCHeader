@class NSString;

@interface FinderCoverWordInfo : WXPBGeneratedMessage

@property (nonatomic) float xPercent;
@property (nonatomic) float yPercent;
@property (nonatomic) unsigned int style;
@property (retain, nonatomic) NSString *colorHex;
@property (retain, nonatomic) NSString *bgColorHex;
@property (nonatomic) float scale;
@property (nonatomic) unsigned int rotate;
@property (retain, nonatomic) NSString *content;

+ (void)initialize;

@end
