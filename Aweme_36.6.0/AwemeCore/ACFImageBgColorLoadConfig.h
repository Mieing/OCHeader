@class UIImage, AWEAwemeModel;

@interface ACFImageBgColorLoadConfig : NSObject

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (nonatomic) unsigned long long loadType;
@property (nonatomic) BOOL shouldAdjustBrightness;
@property (nonatomic) BOOL shouldAdjustBgColor;
@property (nonatomic) BOOL disableAutoSave;

- (void).cxx_destruct;

@end
