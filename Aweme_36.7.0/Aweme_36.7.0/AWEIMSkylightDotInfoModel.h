@class NSString;

@interface AWEIMSkylightDotInfoModel : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long dotPosition;
@property (copy, nonatomic) NSString *dotColor;
@property (copy, nonatomic) NSString *dotDarkColor;
@property (copy, nonatomic) NSString *dotUrl;
@property (copy, nonatomic) NSString *dotDarkUrl;

- (id)getContentDict;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
