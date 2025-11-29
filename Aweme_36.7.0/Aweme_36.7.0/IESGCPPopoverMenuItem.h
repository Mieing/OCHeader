@class NSString;

@interface IESGCPPopoverMenuItem : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) id /* block */ onTap;

+ (id)itemWithTitle:(id)a0 imageName:(id)a1 onTap:(id /* block */)a2;

- (void).cxx_destruct;

@end
