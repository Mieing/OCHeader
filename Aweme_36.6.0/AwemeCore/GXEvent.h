@class NSString, NSDictionary, GXTemplateItem, UIView;

@interface GXEvent : NSObject

@property (nonatomic) struct CGPoint { double x0; double x1; } contentOffset;
@property (nonatomic) struct CGPoint { double x; double y; } contentOffset;
@property (weak, nonatomic) UIView *view;
@property (copy, nonatomic) NSString *nodeId;
@property (nonatomic) long long index;
@property (retain, nonatomic) NSDictionary *eventParams;
@property (weak, nonatomic) GXTemplateItem *templateItem;
@property (nonatomic) unsigned long long gestureType;

- (void)setupEventInfo:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
