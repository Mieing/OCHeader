@class NSString, UIImage;

@interface TCUploadPicDic : TCAPIRequest

@property (retain, nonatomic) NSString *paramPhotodesc;
@property (retain, nonatomic) NSString *paramTitle;
@property (retain, nonatomic) NSString *paramAlbumid;
@property (nonatomic) NSString *paramMobile;
@property (retain, nonatomic) NSString *paramX;
@property (retain, nonatomic) NSString *paramY;
@property (retain, nonatomic) UIImage *paramPicture;
@property (nonatomic) NSString *paramNeedfeed;
@property (nonatomic) NSString *paramSuccessnum;
@property (nonatomic) NSString *paramPicnum;

+ (id)dictionary;

- (void).cxx_destruct;

@end
