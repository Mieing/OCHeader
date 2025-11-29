@class UIFont, NSString, UIColor, UIImage;

@interface WNImageButtonInfo : NSObject

@property (retain, nonatomic) NSString *buttonName;
@property (retain, nonatomic) UIImage *buttonImage;
@property (retain, nonatomic) UIFont *displayFont;
@property (nonatomic) long long textAlignment;
@property (nonatomic) long long dataSourceType;
@property (nonatomic) long long imageType;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *logoColor;
@property (nonatomic) unsigned long long colorType;
@property (retain, nonatomic) NSString *reportName;
@property (nonatomic) double btnWidth;

- (id)initInfoWith:(id)a0 buttonImage:(id)a1 displayFont:(id)a2 textAlignment:(long long)a3 dataSourceType:(long long)a4;
- (id)initInfoWith:(id)a0 buttonImage:(id)a1 displayFont:(id)a2 textAlignment:(long long)a3 dataSourceType:(long long)a4 imageType:(long long)a5;
- (id)initInfoWith:(id)a0 buttonImage:(id)a1 displayFont:(id)a2 textAlignment:(long long)a3 dataSourceType:(long long)a4 imageType:(long long)a5 textColor:(id)a6 logoColor:(id)a7 colorType:(unsigned long long)a8;
- (void).cxx_destruct;

@end
