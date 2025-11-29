@class NSString;

@interface LynxFatImageProcessor : NSObject <LynxImageProcessor> {
    struct CGSize { double width; double height; } _size;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _padding;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _border;
    long long _contentMode;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
