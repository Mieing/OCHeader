@class UIImage, NSString;

@interface H5GameMenuItem : NSObject

@property (nonatomic) BOOL isCustom;
@property (retain, nonatomic) UIImage *iconImg;
@property (retain, nonatomic) id userInfo;
@property (nonatomic) unsigned int itemId;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *thumbUrl;
@property (nonatomic) int actionType;
@property (retain, nonatomic) NSString *targetUrl;
@property (nonatomic) unsigned int placeId;

+ (id)initFromCustomMenuItem:(id)a0;

- (BOOL)isValid;
- (id)getValidTitle;
- (id)toStandardMenuItem;
- (void).cxx_destruct;

@end
