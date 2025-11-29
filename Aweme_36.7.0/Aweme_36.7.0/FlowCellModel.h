@class NSString, UIImage;

@interface FlowCellModel : NSObject

@property (copy, nonatomic) NSString *avatarUrl;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) UIImage *avatarPlaceholder;

- (void).cxx_destruct;

@end
