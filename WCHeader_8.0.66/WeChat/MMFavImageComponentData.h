@class NSArray, NSString, MMMusicInfo, UIImage, MMMusicShareItem, TingShareListenItem, TingShareCategoryItem;

@interface MMFavImageComponentData : MMComponentData

@property (nonatomic) long long favType;
@property (nonatomic) unsigned int itemShowType;
@property (nonatomic) BOOL largeFilePossible;
@property (nonatomic) BOOL isCDN;
@property (retain, nonatomic) NSString *dataFmt;
@property (retain, nonatomic) NSString *thumbUrl;
@property (retain, nonatomic) NSString *ThumbPath;
@property (retain, nonatomic) NSString *CDNThumbUrl;
@property (retain, nonatomic) NSString *CDNThumbKey;
@property (nonatomic) unsigned long long CDNThumbSize;
@property (retain, nonatomic) NSString *defaultThumbPath;
@property (retain, nonatomic) NSString *ocr;
@property (nonatomic) BOOL bUseWebImgView;
@property (copy, nonatomic) NSString *WebImgUrl;
@property (nonatomic) BOOL fromWebPage;
@property (retain, nonatomic) UIImage *icon;
@property (retain, nonatomic) NSString *accessibilityString;
@property (retain, nonatomic) MMMusicInfo *musicInfo;
@property (retain, nonatomic) MMMusicShareItem *musicShareItem;
@property (retain, nonatomic) TingShareListenItem *tingListenItem;
@property (retain, nonatomic) TingShareCategoryItem *tingCategoryItem;
@property (retain, nonatomic) NSArray *dataList;
@property (nonatomic) unsigned int favId;
@property (nonatomic) unsigned int liteAppItemShowType;

- (id)init;
- (void).cxx_destruct;

@end
