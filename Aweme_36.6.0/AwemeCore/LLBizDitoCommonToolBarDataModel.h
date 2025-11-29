@class NSString, NSArray, NSDictionary, LLBizDitoCommonToolBarItemModel;

@interface LLBizDitoCommonToolBarDataModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *backGround;
@property (retain, nonatomic) LLBizDitoCommonToolBarItemModel *title;
@property (copy, nonatomic) NSArray *leftContainer;
@property (copy, nonatomic) NSArray *rightContainer;
@property (nonatomic) BOOL shouldShowLine;
@property (copy, nonatomic) NSString *notFitStatusBar;
@property (copy, nonatomic) NSDictionary *bizParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)leftContainerJSONTransformer;
+ (id)rightContainerJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
