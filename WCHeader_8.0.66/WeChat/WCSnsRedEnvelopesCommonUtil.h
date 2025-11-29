@interface WCSnsRedEnvelopesCommonUtil : NSObject

+ (id)getRedEnvelopesTitle:(int)a0;
+ (BOOL)shouldUseSnsDemo:(int)a0 snsObjectType:(long long)a1;
+ (double)genRandomRewardMoney;
+ (unsigned int)genNewRandomRewardMoney;
+ (BOOL)shouldShowThumbImageView:(id)a0;
+ (BOOL)shouldShowBigImageView:(id)a0;
+ (id)getAlbumCommentSingleBigHlImage;
+ (id)getAlbumOperateMoreImage;
+ (id)getAlbumOperateMoreHlImage;
+ (id)getAlbumUsernameHbColor;
+ (id)getAlbumUsernameHbColorHl;
+ (id)getAlbumDetailBackgroundHbColor;
+ (id)getTimelineCommentHbHlColor;
+ (id)getTimeLineNameHbColor;
+ (id)imageWithColor:(id)a0 width:(double)a1 height:(double)a2;
+ (id)imageFromUIView:(id)a0;

@end
