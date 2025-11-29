@class HTSLiveImage;

@interface IESLiveKTVDecorateMidiModel : IESLiveKTVDecorateCellModel

@property (retain, nonatomic) HTSLiveImage *thumbnail;
@property (retain, nonatomic) HTSLiveImage *topRightImage;
@property (nonatomic) int ownerDegree;

- (void).cxx_destruct;

@end
