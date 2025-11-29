@class NSCharacterSet;

@interface IESLiveSpecialCharacterSet : NSObject

@property (retain, nonatomic) NSCharacterSet *specialSet;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (id)filterSpecialAndNewlineCharacter:(id)a0;
- (id)filterSpecialCharacter:(id)a0;
- (id)setupSpecialSet;
- (id)filterSpecialCharacter:(id)a0 anotherCharacterSet:(id)a1 bySymbol:(id)a2;
- (id)filterSpecialCharacter:(id)a0 bySymbol:(id)a1;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
