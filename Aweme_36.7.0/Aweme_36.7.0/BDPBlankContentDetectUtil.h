@interface BDPBlankContentDetectUtil : NSObject

+ (BOOL)calculateIsPureColor:(char *)a0 dataLength:(long long)a1 customColorDiff:(long long)a2;
+ (BOOL)imageIsPureColor:(id)a0 customColorDiff:(long long)a1;
+ (BOOL)imagePixelsIsPureColor:(char *)a0 width:(unsigned int)a1 height:(unsigned int)a2 customColorDiff:(long long)a3;
+ (BOOL)blankImageDetect:(id)a0 blankColor:(id)a1;

@end
