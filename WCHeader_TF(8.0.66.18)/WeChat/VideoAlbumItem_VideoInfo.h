@class NSString;

@interface VideoAlbumItem_VideoInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *playUrl;
@property (retain, nonatomic) NSString *picUrl;
@property (nonatomic) unsigned int height;
@property (nonatomic) unsigned int width;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) unsigned int duration;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSString *defaultPublishContent;
@property (retain, nonatomic) NSString *shareContent;
@property (retain, nonatomic) NSString *shareUrl;
@property (retain, nonatomic) NSString *feedTitle;
@property (retain, nonatomic) NSString *contentNew;
@property (retain, nonatomic) NSString *shareContentNew;
@property (retain, nonatomic) NSString *profileTitle;
@property (retain, nonatomic) NSString *topTitle;
@property (retain, nonatomic) NSString *shareSecondContent;

+ (void)initialize;

@end
