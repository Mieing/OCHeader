@class NSString, NSURL;

@interface GIDProfileData : NSObject <NSCopying, NSSecureCoding> {
    NSURL *_imageURL;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *email;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *givenName;
@property (readonly, nonatomic) NSString *familyName;
@property (readonly, nonatomic) BOOL hasImage;

- (BOOL)isFIFEAvatarURL:(id)a0;
- (id)initWithEmail:(id)a0 name:(id)a1 givenName:(id)a2 familyName:(id)a3 imageURL:(id)a4;
- (id)imageURLWithDimension:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
