@class UIColor, NSString;

@interface WCFinderDynamicIconFetchArgs : NSObject <NSCopying>

@property (nonatomic) int type;
@property (nonatomic) SEL iconIdentify;
@property (nonatomic) struct CGSize { double width; double height; } iconSize;
@property (retain, nonatomic) UIColor *iconColor;
@property (nonatomic) long long iconId;
@property (retain, nonatomic) NSString *key;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
