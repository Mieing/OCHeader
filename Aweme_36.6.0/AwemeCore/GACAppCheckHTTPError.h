@class NSData, NSHTTPURLResponse;

@interface GACAppCheckHTTPError : NSError

@property (readonly, nonatomic) NSHTTPURLResponse *HTTPResponse;
@property (readonly, nonatomic) NSData *data;

+ (id)userInfoWithHTTPResponse:(id)a0 data:(id)a1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithHTTPResponse:(id)a0 data:(id)a1;

@end
