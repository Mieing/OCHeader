@class AWENearbyGuideMaskModel, NSString, AWENearbyEnterBubbleModel, AWENearbyHalfCloseAnimationConfig;

@interface AWENearbyHalfClosedAction : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWENearbyEnterBubbleModel *bubbleModel;
@property (retain, nonatomic) AWENearbyGuideMaskModel *maskModel;
@property (retain, nonatomic) AWENearbyHalfCloseAnimationConfig *closeAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
