@interface WCFinderHeadContactViewCacheItem : NSObject

@property (nonatomic) unsigned long long viewLineType;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } viewFrame;

+ (id)cacheItemWithView:(id)a0;

@end
