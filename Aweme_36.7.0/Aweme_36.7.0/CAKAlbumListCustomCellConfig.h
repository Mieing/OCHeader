@class UIColor, UIView;

@interface CAKAlbumListCustomCellConfig : NSObject

@property (retain, nonatomic) UIView *customView;
@property (nonatomic) BOOL available;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) id /* block */ clickAction;
@property (copy, nonatomic) id /* block */ updateState;

- (void).cxx_destruct;
- (BOOL)isValid;
- (id)init;

@end
