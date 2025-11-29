@class NSString;

@interface YYTextRubyAnnotation : NSObject <NSCopying, NSCoding>

@property (nonatomic) unsigned char alignment;
@property (nonatomic) unsigned char overhang;
@property (nonatomic) double sizeFactor;
@property (copy, nonatomic) NSString *textBefore;
@property (copy, nonatomic) NSString *textAfter;
@property (copy, nonatomic) NSString *textInterCharacter;
@property (copy, nonatomic) NSString *textInline;

+ (id)rubyWithCTRubyRef:(struct __CTRubyAnnotation { } *)a0;

- (id)init;
- (struct __CTRubyAnnotation { } *)CTRubyAnnotation;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
