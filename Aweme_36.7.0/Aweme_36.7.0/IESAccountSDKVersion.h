@class NSString;

@interface IESAccountSDKVersion : NSObject

@property (class, copy, nonatomic) NSString *mssdkVersion;
@property (class, copy, nonatomic) NSString *ttnetVersion;
@property (class, copy, nonatomic) NSString *bdturingVersion;
@property (class, copy, nonatomic) NSString *bytedCertVersion;

+ (id)mssdkVersion;
+ (id)bytedCertVersion;
+ (id)bdturingVersion;
+ (id)ttnetVersion;

@end
