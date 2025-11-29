@class NSString, UIView;

@interface GXData : NSObject

@property (weak, nonatomic) UIView *view;
@property (copy, nonatomic) NSString *nodeId;
@property (nonatomic) long long index;
@property (copy, nonatomic) NSString *templateId;

- (void).cxx_destruct;
- (id)init;

@end
