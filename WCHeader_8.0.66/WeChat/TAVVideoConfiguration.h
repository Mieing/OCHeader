@class NSString;
@protocol TAVVideoComposition;

@interface TAVVideoConfiguration : NSObject <TAVVideoComposition, NSCopying>

@property (nonatomic) unsigned long long contentMode;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform;
@property (retain, nonatomic) id<TAVVideoComposition> effect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
