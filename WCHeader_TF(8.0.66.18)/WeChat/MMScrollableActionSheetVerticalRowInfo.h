@class NSString, UIImage, NSAttributedString;

@interface MMScrollableActionSheetVerticalRowInfo : MMObject

@property (nonatomic) BOOL isLoading;
@property (nonatomic) unsigned int rowType;
@property (retain, nonatomic) NSString *webImageUrl;
@property (retain, nonatomic) UIImage *localImage;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSAttributedString *attributedTitle;
@property (retain, nonatomic) NSString *subtitle;

- (void).cxx_destruct;

@end
