@class UIImage, NSString;

@interface AWEDetailBottomActionButtonConfig : NSObject

@property (retain, nonatomic) UIImage *iconImage;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) unsigned long long buttonType;
@property (nonatomic) unsigned long long colorStyle;
@property (nonatomic) unsigned long long sizeStyle;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (copy, nonatomic) id /* block */ setupBlock;

+ (id)collectButtonConfigWithActionBlock:(id /* block */)a0;

- (void).cxx_destruct;

@end
