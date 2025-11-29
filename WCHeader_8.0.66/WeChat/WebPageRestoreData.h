@class NSString, NSMutableDictionary;

@interface WebPageRestoreData : NSObject <NSCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *url;
@property (nonatomic) unsigned int itemShowType;
@property (retain, nonatomic) NSMutableDictionary *extraInfo;

+ (id)allowedSecureDecodingClasses;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
