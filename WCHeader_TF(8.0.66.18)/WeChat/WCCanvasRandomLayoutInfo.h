@class NSArray, NSString, WCCanvasRandomLayoutTransitionAnimationInfo, WCCanvasRandomLayoutEncoreInfo, WCCanvasRandomLayoutEncorePickInfo;

@interface WCCanvasRandomLayoutInfo : MMObject <NSCoding>

@property (retain, nonatomic) NSArray *layoutItems;
@property (nonatomic) unsigned int cornerRadius;
@property (retain, nonatomic) NSString *hugeDiskTransitionImg;
@property (retain, nonatomic) NSString *hugeDiskTransitionColor;
@property (nonatomic) double hugeDiskTransitionColorAlpha;
@property (retain, nonatomic) NSString *brandNewCollectionCoverImg;
@property (retain, nonatomic) NSString *brandNewCollectionBackImg;
@property (retain, nonatomic) NSString *recollectedCoverImg;
@property (nonatomic) double collectionCoverWidth;
@property (nonatomic) double collectionCoverHeight;
@property (retain, nonatomic) NSString *recollectedContinuePickCardTip;
@property (retain, nonatomic) NSString *recollectedShareTip;
@property (retain, nonatomic) NSArray *transitionImgs;
@property (retain, nonatomic) WCCanvasRandomLayoutTransitionAnimationInfo *transitionAnimationInfo;
@property (retain, nonatomic) WCCanvasRandomLayoutEncoreInfo *encoreInfo;
@property (retain, nonatomic) WCCanvasRandomLayoutEncorePickInfo *randomEncorePickInfo;
@property (retain, nonatomic) NSString *theChosenRandomCardId;

+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0 withSizeType:(long long)a1 basicWidth:(int)a2 basicRootFontSize:(int)a3 widthRoundingType:(long long)a4 heightRoundingType:(long long)a5;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
