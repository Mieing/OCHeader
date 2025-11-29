@class NSString, NSAttributedString, HTSLiveImage;

@interface IESLivePinCommonPicTextParams : NSObject

@property (retain, nonatomic) id metaData;
@property (copy, nonatomic) NSAttributedString *contentAttr;
@property (copy, nonatomic) NSAttributedString *descAttr;
@property (retain, nonatomic) HTSLiveImage *imageIcon;
@property (copy, nonatomic) NSString *schema;

- (void).cxx_destruct;

@end
