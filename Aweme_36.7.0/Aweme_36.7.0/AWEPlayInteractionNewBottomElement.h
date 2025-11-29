@class NSNumber, NSString;

@interface AWEPlayInteractionNewBottomElement : AWEPlayInteractionBaseElement <AWEPlayInteractionComponentGlobalPriorityComponentProtocol, AWEPlayInteractionElementConfigProtocol>

@property (retain, nonatomic) NSNumber *priority;
@property (nonatomic) BOOL hasMutex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewController_willDisplay;
- (unsigned long long)elementVisibleType;
- (void)configWithParamDict:(id)a0;
- (BOOL)shouldAppearWithData:(id)a0;
- (id)bottomElementContainer;
- (void).cxx_destruct;
- (void)reset;
- (id)identifier;
- (unsigned long long)elementPosition;

@end
