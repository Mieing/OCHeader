@class NSString;

@interface IESECOrderListContextMenuAction : NSObject

@property (copy, nonatomic) NSString *imageURL;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) double viewScale;
@property (nonatomic) double fontScale;
@property (copy, nonatomic) id /* block */ actionBlock;

- (void).cxx_destruct;

@end
