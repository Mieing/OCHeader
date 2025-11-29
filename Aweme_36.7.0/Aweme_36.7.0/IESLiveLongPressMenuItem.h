@class NSString, UIImage, NSURL;

@interface IESLiveLongPressMenuItem : NSObject

@property (copy, nonatomic) NSString *itemTitle;
@property (retain, nonatomic) UIImage *itemImage;
@property (retain, nonatomic) NSURL *itemImageURL;
@property (copy, nonatomic) id /* block */ menuItemAction;

+ (id)itemWithTitle:(id)a0 image:(id)a1 handler:(id /* block */)a2;
+ (id)itemWithTitle:(id)a0 imageURL:(id)a1 handler:(id /* block */)a2;

- (void).cxx_destruct;
- (void)performAction;

@end
