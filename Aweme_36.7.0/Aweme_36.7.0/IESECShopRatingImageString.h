@class IESECGoodsDetailAuthorReputationModel, UIImage, IESECScoreModel;

@interface IESECShopRatingImageString : NSObject

@property (retain, nonatomic) IESECGoodsDetailAuthorReputationModel *r_model;
@property (retain, nonatomic) IESECScoreModel *r_scoreModel;
@property (nonatomic) struct CGSize { double width; double height; } r_imageSize;
@property (nonatomic) double r_space;
@property (nonatomic) double r_fontsize;
@property (nonatomic) double r_baselineOffset;
@property (retain, nonatomic) UIImage *r_fullImage;
@property (retain, nonatomic) UIImage *r_halfImage;
@property (retain, nonatomic) UIImage *r_emptyImage;
@property (readonly, copy, nonatomic) id /* block */ model;
@property (readonly, copy, nonatomic) id /* block */ scoreModel;
@property (readonly, copy, nonatomic) id /* block */ imageSize;
@property (readonly, copy, nonatomic) id /* block */ space;
@property (readonly, copy, nonatomic) id /* block */ fontsize;
@property (readonly, copy, nonatomic) id /* block */ fullImage;
@property (readonly, copy, nonatomic) id /* block */ halfImage;
@property (readonly, copy, nonatomic) id /* block */ emptyImage;
@property (readonly, copy, nonatomic) id /* block */ baselineOffset;
@property (readonly, copy, nonatomic) id /* block */ draw;
@property (readonly, copy, nonatomic) id /* block */ drawWithScoreModel;

- (id)getContentAttributedString;
- (id)getContentAttributedStringWithScoreModel;
- (id)imagePatterns;
- (id)imagePatternsWithScoreModel;
- (void).cxx_destruct;
- (id)init;

@end
