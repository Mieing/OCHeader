@class NSString;

@interface MMWebCanvasItemData : MMObject

@property (copy, nonatomic) NSString *canvasId;
@property (copy, nonatomic) NSString *bizType;
@property (copy, nonatomic) NSString *jsonData;
@property (copy, nonatomic) NSString *accessibilityLabel;
@property (copy, nonatomic) NSString *bizDomain;

- (id)description;
- (void).cxx_destruct;

@end
