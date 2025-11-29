@class NSString, TextStatePublishBrandInfo, UIImage, TextStatePublishMediaInfo, NSArray, TextStateIcon;
@protocol TextState3rdPartyHandler;

@interface TextStatePublishSourceInfo : NSObject

@property (retain, nonatomic) id<TextState3rdPartyHandler> thirdPartyHandler;
@property (retain, nonatomic) NSString *sourceId;
@property (retain, nonatomic) NSString *sourceActivityId;
@property (retain, nonatomic) NSString *sourceVerifyInfo;
@property (retain, nonatomic) NSString *emoticonMd5;
@property (retain, nonatomic) NSString *emoticonURLString;
@property (retain, nonatomic) NSString *emoticonPath;
@property (retain, nonatomic) NSString *sourceName;
@property (retain, nonatomic) NSString *sourceIconURL;
@property (retain, nonatomic) NSString *iconId;
@property (retain, nonatomic) TextStateIcon *icon;
@property (retain, nonatomic) NSString *customIconDescription;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSString *imageURLString;
@property (retain, nonatomic) NSString *videoPath;
@property (retain, nonatomic) TextStatePublishMediaInfo *mediaInfo;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) TextStatePublishBrandInfo *brandInfo;
@property (retain, nonatomic) NSArray *dataItems;
@property (retain, nonatomic) NSArray *sourceDataItems;

+ (BOOL)requestDataItemFromDataItems:(id)a0 completion:(id /* block */)a1;

- (id)initWithFooter:(id)a0;
- (id)footer;
- (id)description;
- (BOOL)isValid;
- (void)privateSetIcon:(id)a0;
- (void)clearMedia;
- (BOOL)isHybrid;
- (BOOL)supportCustomMedia;
- (BOOL)supportCustomCover;
- (id)get3rdPartyDataItems;
- (void)fill3rdPartyDataItems:(id)a0;
- (void)fill3rdPartyDataItems:(id)a0 sourceDataItems:(id)a1;
- (void)resetDataItems;
- (id)jumpInfos;
- (id)sourceJumpInfos;
- (void)requestDataItemsFromServerWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
