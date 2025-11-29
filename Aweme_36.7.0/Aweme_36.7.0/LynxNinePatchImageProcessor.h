@class NSString;

@interface LynxNinePatchImageProcessor : NSObject <LynxImageProcessor> {
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _capInsets;
    double _capInsetsScale;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
