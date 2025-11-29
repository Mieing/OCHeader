@interface IESECMallListKitBigFontConfig : NSObject

@property (nonatomic) BOOL bigFontEnabled;
@property (nonatomic) double fontSizeScale;
@property (nonatomic) BOOL hostCustomFontSizeEnabled;
@property (nonatomic) BOOL ipadCustomFontSizeEnabled;
@property (nonatomic) double sizeScale;

- (BOOL)customFontSizeEnabled;

@end
