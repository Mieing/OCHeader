@class NSString, NSArray;

@interface LynxFontFace : NSObject {
    NSString *_familyName;
    NSArray *_srcArray;
}

+ (id)parseSrc:(id)a0 withLynxContext:(id)a1;
+ (void)reportSrcFormatError:(id)a0 withLynxContext:(id)a1;

- (id)initWithFamilyName:(id)a0 andSrc:(id)a1 withLynxContext:(id)a2;
- (unsigned long long)srcCount;
- (id)srcAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)getKey;

@end
