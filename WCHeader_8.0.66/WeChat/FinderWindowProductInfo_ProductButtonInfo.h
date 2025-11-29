@class NSString, FinderWindowProductInfo_DetailPage;

@interface FinderWindowProductInfo_ProductButtonInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *buttonWording;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) FinderWindowProductInfo_DetailPage *buttonPage;
@property (retain, nonatomic) NSString *fontRgba;
@property (retain, nonatomic) NSString *backendRbga;
@property (retain, nonatomic) NSString *clickStateFontRgba;
@property (retain, nonatomic) NSString *clickStateBackendRbga;
@property (retain, nonatomic) NSString *clickButtonWording;
@property (nonatomic) unsigned int iconWidth;
@property (nonatomic) unsigned int iconHeight;
@property (nonatomic) unsigned int buttonWidth;
@property (nonatomic) unsigned int spacing;
@property (nonatomic) unsigned int fontSize;
@property (nonatomic) unsigned int productButtonType;
@property (nonatomic) unsigned int buttonWidthSmall;

+ (void)initialize;

@end
