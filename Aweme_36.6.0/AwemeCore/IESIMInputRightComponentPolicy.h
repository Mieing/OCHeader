@class NSString, NSMutableArray;

@interface IESIMInputRightComponentPolicy : AWEIMComponentBase <IESIMInputRightComponentPolicyInterface>

@property (retain, nonatomic) NSMutableArray *rightButtons;
@property (nonatomic) BOOL hasRightAnchor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

@end
