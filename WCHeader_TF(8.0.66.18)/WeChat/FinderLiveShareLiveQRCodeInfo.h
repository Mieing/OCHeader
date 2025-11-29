@class NSString, FinderLiveQRCodePosterStyles, NSMutableArray;

@interface FinderLiveShareLiveQRCodeInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *qrcodeBuffer;
@property (nonatomic) unsigned int liveCreateTime;
@property (retain, nonatomic) NSString *liveShareDesc;
@property (retain, nonatomic) NSString *liveSharePicUrl;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSString *qrcodeUrl;
@property (retain, nonatomic) FinderLiveQRCodePosterStyles *qrcodePosterStyles;
@property (nonatomic) unsigned int currentStyleId;
@property (retain, nonatomic) NSMutableArray *qrcodes;

+ (void)initialize;

@end
