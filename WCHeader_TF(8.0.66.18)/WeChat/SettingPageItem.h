@class NSString, NSMutableArray;

@interface SettingPageItem : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) Class cls;
@property (retain, nonatomic) NSMutableArray *childs;
@property (copy, nonatomic) id /* block */ addChild;
@property (copy, nonatomic) id /* block */ define;

+ (id)item;

- (id)initWithTitle:(id)a0 cls:(Class)a1;
- (id)findViewController:(id)a0;
- (id)createViewController;
- (void).cxx_destruct;

@end
