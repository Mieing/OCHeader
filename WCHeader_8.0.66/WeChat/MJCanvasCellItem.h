@class NSString, OMJAspectRatio;

@interface MJCanvasCellItem : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *iconName;
@property (retain, nonatomic) OMJAspectRatio *aspectRatio;
@property (nonatomic) BOOL isSelected;

- (id)initWithTitle:(id)a0 iconName:(id)a1 aspectRatio:(id)a2;
- (void).cxx_destruct;

@end
