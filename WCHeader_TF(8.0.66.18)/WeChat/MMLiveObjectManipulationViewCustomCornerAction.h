@class UIColor, NSString, UIImage, NSObject;

@interface MMLiveObjectManipulationViewCustomCornerAction : NSObject <MMLiveObjectManipulationViewCornerAction>

@property (retain, nonatomic) UIImage *icon;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) NSObject *accessibilityDescriptor;
@property (copy, nonatomic) id /* block */ action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
