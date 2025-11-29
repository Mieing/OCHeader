@class Canvas, WeApp, H5Link, ChannelsFeeds, Coupon, ChannelsProfile;

@interface MaterialPageInfo : WXPBGeneratedMessage

@property (retain, nonatomic) Canvas *canvas;
@property (retain, nonatomic) WeApp *weapp;
@property (retain, nonatomic) H5Link *h5Link;
@property (retain, nonatomic) Coupon *coupon;
@property (retain, nonatomic) ChannelsProfile *channelsProfile;
@property (retain, nonatomic) ChannelsFeeds *channelsFeeds;

+ (void)initialize;

@end
