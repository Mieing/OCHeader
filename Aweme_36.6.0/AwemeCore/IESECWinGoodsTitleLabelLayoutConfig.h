@class UIFont;

@interface IESECWinGoodsTitleLabelLayoutConfig : NSObject {
    double _scale;
}

@property (nonatomic) double width;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) double tagTopOffset;
@property (nonatomic) double lineHeight;
@property (nonatomic) double lineSpace;
@property (nonatomic) double tagIconFixHeight;

- (void).cxx_destruct;
- (id)init;

@end
