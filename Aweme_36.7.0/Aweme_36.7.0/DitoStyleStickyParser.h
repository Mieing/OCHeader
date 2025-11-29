@interface DitoStyleStickyParser : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (BOOL)useNewStickyParse;
- (BOOL)parseIsSticky:(id)a0;
- (id)parseChildStick:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
