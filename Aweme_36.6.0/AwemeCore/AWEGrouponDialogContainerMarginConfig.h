@class NSString;

@interface AWEGrouponDialogContainerMarginConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) double verticalRatio;
@property (nonatomic) double horizontalRatio;
@property (nonatomic) double left;
@property (nonatomic) double right;
@property (nonatomic) double top;
@property (nonatomic) double bottom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;


@end
