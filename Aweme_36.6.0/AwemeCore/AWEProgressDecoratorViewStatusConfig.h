@class NSArray, AWEProgressDecoratorViewConfig;

@interface AWEProgressDecoratorViewStatusConfig : NSObject

@property (nonatomic) unsigned long long decoratorType;
@property (nonatomic) unsigned long long bizType;
@property (copy, nonatomic) NSArray *dotInfos;
@property (retain, nonatomic) AWEProgressDecoratorViewConfig *decoratorNormalConfig;
@property (retain, nonatomic) AWEProgressDecoratorViewConfig *decoratorActiveConfig;
@property (retain, nonatomic) AWEProgressDecoratorViewConfig *decoratorDraggingConfig;
@property (retain, nonatomic) AWEProgressDecoratorViewConfig *decoratorStableConfig;
@property (retain, nonatomic) Class customDecoratorViewClass;

- (void).cxx_destruct;

@end
