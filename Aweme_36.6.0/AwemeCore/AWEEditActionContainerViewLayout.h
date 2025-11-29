@interface AWEEditActionContainerViewLayout : NSObject <NSCopying>

@property (nonatomic) double itemSpacing;
@property (nonatomic) struct CGSize { double width; double height; } itemSize;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } containerInset;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;
@property (nonatomic) unsigned long long direction;
@property (nonatomic) long long foldExihibitCount;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
