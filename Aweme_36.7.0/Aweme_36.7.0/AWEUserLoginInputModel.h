@class NSString;

@interface AWEUserLoginInputModel : NSObject

@property (copy, nonatomic) NSString *placeholder;
@property (nonatomic) BOOL isSecure;
@property (nonatomic) long long maxLength;
@property (nonatomic) unsigned long long eyeViewStyle;

- (id)initWithPlaceholder:(id)a0 isSecure:(BOOL)a1 maxLength:(long long)a2;
- (id)initWithPlaceholder:(id)a0 isSecure:(BOOL)a1 maxLength:(long long)a2 eyeViewStyle:(unsigned long long)a3;
- (void).cxx_destruct;

@end
