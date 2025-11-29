@class NSString, UIView;

@interface AWEAdComponentExamineViewItem : NSObject

@property (weak, nonatomic) UIView *view;
@property (copy, nonatomic) NSString *logExtraStr;
@property (copy, nonatomic) NSString *componentID;
@property (nonatomic) unsigned long long componentType;
@property (copy, nonatomic) id /* block */ getCurrentViewBlock;

- (void).cxx_destruct;

@end
