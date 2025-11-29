@class NSString, AWEGrouponGuideMaskModel, AWENearbyEnterBubbleModel, AWEGrouponHalfCloseAnimationConfig;

@interface AWEGrouponHalfClosedAction : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWENearbyEnterBubbleModel *bubbleModel;
@property (retain, nonatomic) AWEGrouponGuideMaskModel *maskModel;
@property (retain, nonatomic) AWEGrouponHalfCloseAnimationConfig *closeAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
