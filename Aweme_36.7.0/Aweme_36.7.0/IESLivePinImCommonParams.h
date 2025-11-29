@class NSString, NSAttributedString, HTSLiveImage;

@interface IESLivePinImCommonParams : NSObject

@property (retain, nonatomic) id message;
@property (nonatomic) BOOL usePictureTextStyle;
@property (copy, nonatomic) NSAttributedString *contentAttr;
@property (copy, nonatomic) NSAttributedString *descAttr;
@property (retain, nonatomic) HTSLiveImage *imageIcon;
@property (copy, nonatomic) NSString *schema;

- (void).cxx_destruct;

@end
