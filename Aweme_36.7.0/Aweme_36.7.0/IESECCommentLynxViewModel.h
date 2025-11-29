@class NSString, NSDictionary, IESECSliceStyle, IESECCommentTemplateLynx;

@interface IESECCommentLynxViewModel : MTLModel <IESHYHybridViewLifecycleProtocol, MTLJSONSerializing>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double styleVerticalValue;
@property (retain, nonatomic) NSString *componentType;
@property (retain, nonatomic) IESECCommentTemplateLynx *templateLynx;
@property (retain, nonatomic) NSDictionary *data;
@property (retain, nonatomic) IESECSliceStyle *viewStyle;
@property (nonatomic) struct CGSize { double width; double height; } viewSize;
@property (nonatomic) double containerHeight;
@property (nonatomic) BOOL isAlreadyRenderSize;
@property (nonatomic) unsigned long long viewLoadStatus;
@property (copy, nonatomic) id /* block */ didUpdateViewSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)viewDidChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)viewDidRecieveError:(id)a0;
- (void)viewDidLoadFailedWithUrl:(id)a0 error:(id)a1;
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (void).cxx_destruct;

@end
