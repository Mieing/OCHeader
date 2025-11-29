@class NSString, UIButton;

@interface ACCTrimCropBarItem : NSObject

@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) NSString *selectedImageName;
@property (copy, nonatomic) NSString *itemId;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIButton *barView;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (copy, nonatomic) id /* block */ needShowBlock;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (retain, nonatomic) id extraData;

- (void).cxx_destruct;
- (id)description;
- (id)initWithBuilder:(id /* block */)a0;

@end
