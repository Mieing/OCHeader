@class NSString, UIColor, UIFont;

@interface AWEVideoPublishMusicSelectTopTabItemData : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) UIColor *unselectColor;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIFont *unselectTitleFont;
@property (nonatomic) BOOL selected;
@property (nonatomic) double underlineSpace;
@property (copy, nonatomic) id /* block */ selectedBlock;
@property (nonatomic) double titleTopOffset;
@property (nonatomic) double buttonLeftOffset;
@property (nonatomic) BOOL needFirstSelected;

- (id)initWithTitle:(id)a0 isLightStyle:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0;

@end
