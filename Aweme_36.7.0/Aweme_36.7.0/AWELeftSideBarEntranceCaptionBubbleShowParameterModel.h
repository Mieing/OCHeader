@class NSString, UIImage;

@interface AWELeftSideBarEntranceCaptionBubbleShowParameterModel : AWELeftSideBarEntranceCaptionBubbleBaseParameterModel <NSCopying>

@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) UIImage *strengthenDarkImage;
@property (retain, nonatomic) UIImage *strengthenLightImage;
@property (copy, nonatomic) NSString *strengthenDarkImageUrl;
@property (copy, nonatomic) NSString *strengthenLightImageUrl;

- (id)initWithComponentId:(id)a0 withBusinessId:(id)a1 withContent:(id)a2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
