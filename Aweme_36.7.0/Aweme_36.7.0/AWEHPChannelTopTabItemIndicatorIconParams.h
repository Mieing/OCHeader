@class UIImage;

@interface AWEHPChannelTopTabItemIndicatorIconParams : NSObject <NSCopying>

@property (retain, nonatomic) UIImage *selectedImage;
@property (retain, nonatomic) UIImage *unselectedImage;
@property (nonatomic) long long distance;
@property (nonatomic) long long iconSize;
@property (nonatomic) long long position;
@property (nonatomic) BOOL hidden;
@property (nonatomic) BOOL rotation;
@property (nonatomic) long long iconColor;

- (void).cxx_destruct;
- (id)description;
- (BOOL)isValid;
- (id)init;
- (BOOL)isValidWithReason:(id *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
