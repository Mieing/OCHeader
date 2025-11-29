@interface BDHMBlankContentDetectUtil : NSObject

+ (BOOL)calculateIsPureColor:(char *)a0 dataLength:(long long)a1 customColorDiff:(long long)a2;
+ (BOOL)imageIsPureColor:(id)a0 customColorDiff:(long long)a1;

@end
