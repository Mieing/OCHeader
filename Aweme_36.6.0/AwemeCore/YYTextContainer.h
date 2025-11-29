@class NSArray, UIBezierPath, NSAttributedString, NSObject;
@protocol YYTextLinePositionModifier, OS_dispatch_semaphore;

@interface YYTextContainer : NSObject <NSCoding, NSCopying> {
    BOOL _readonly;
    NSObject<OS_dispatch_semaphore> *_lock;
    struct CGSize { double width; double height; } _size;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _insets;
    UIBezierPath *_path;
    NSArray *_exclusionPaths;
    BOOL _pathFillEvenOdd;
    double _pathLineWidth;
    BOOL _verticalForm;
    unsigned long long _maximumNumberOfRows;
    unsigned long long _truncationType;
    NSAttributedString *_truncationToken;
    id<YYTextLinePositionModifier> _linePositionModifier;
}

@property struct CGSize { double x0; double x1; } size;
@property struct UIEdgeInsets { double x0; double x1; double x2; double x3; } insets;
@property (copy) UIBezierPath *path;
@property (copy) NSArray *exclusionPaths;
@property double pathLineWidth;
@property (getter=isPathFillEvenOdd) BOOL pathFillEvenOdd;
@property (getter=isVerticalForm) BOOL verticalForm;
@property unsigned long long maximumNumberOfRows;
@property unsigned long long truncationType;
@property (copy) NSAttributedString *truncationToken;
@property (copy) id<YYTextLinePositionModifier> linePositionModifier;

+ (id)containerWithSize:(struct CGSize { double x0; double x1; })a0;
+ (id)containerWithSize:(struct CGSize { double x0; double x1; })a0 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
+ (id)containerWithPath:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
