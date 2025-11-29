@class NSString;

@interface AWEIMPinYinCharacterItem : NSObject

@property (nonatomic) unsigned long long itemType;
@property (copy, nonatomic) NSString *originalCharacter;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } originalRange;
@property (copy, nonatomic) NSString *pinYin;
@property (readonly, nonatomic) unsigned short oriUnichar;

+ (id)characterItemWithChinese:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (id)characterItemWithAlpha:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (id)characterItemWithOtherChar:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

- (void).cxx_destruct;

@end
