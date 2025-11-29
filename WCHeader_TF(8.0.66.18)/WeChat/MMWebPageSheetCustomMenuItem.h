@class NSString, UIImage;

@interface MMWebPageSheetCustomMenuItem : NSObject

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *iconImage;
@property (copy, nonatomic) id /* block */ actionBlock;

- (id)initWithIcon:(id)a0 title:(id)a1 actionBlock:(id /* block */)a2;
- (void).cxx_destruct;

@end
