@class Star_MusicAuthor, Star_FINDER_Author, Star_H5_Author, Star_KYK_Video_Author, Star_WeAppAuthor;

@interface StarAuthor : WXPBGeneratedMessage

@property (nonatomic) unsigned int atype;
@property (retain, nonatomic) Star_H5_Author *h5;
@property (retain, nonatomic) Star_KYK_Video_Author *kykVideo;
@property (retain, nonatomic) Star_FINDER_Author *finder;
@property (retain, nonatomic) Star_MusicAuthor *music;
@property (retain, nonatomic) Star_WeAppAuthor *weapp;

+ (void)initialize;

@end
