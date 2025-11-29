@class IESGCPPBGameImage, UIColor;

@interface IESGCPHeaderTheme : NSObject

@property (nonatomic) long long headerImageType;
@property (retain, nonatomic) IESGCPPBGameImage *headerImage;
@property (retain, nonatomic) UIColor *headerBgColor;
@property (nonatomic) long long headerBgColorStyle;
@property (nonatomic) long long placeHolderImageType;
@property (nonatomic) BOOL isNewHeadImageSize;

- (void).cxx_destruct;

@end
