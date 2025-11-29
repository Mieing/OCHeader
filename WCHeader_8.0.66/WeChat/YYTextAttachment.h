@class NSDictionary;

@interface YYTextAttachment : NSObject <NSCoding, NSCopying>

@property (retain, nonatomic) id content;
@property (nonatomic) long long contentMode;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (retain, nonatomic) NSDictionary *userInfo;

+ (id)attachmentWithContent:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
