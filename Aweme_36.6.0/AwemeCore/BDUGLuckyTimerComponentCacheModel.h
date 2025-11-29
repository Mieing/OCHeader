@class NSObject;
@protocol NSCoding;

@interface BDUGLuckyTimerComponentCacheModel : NSObject <NSCoding>

@property (retain, nonatomic) NSObject<NSCoding> *info;
@property (nonatomic) double unUploadedTs;
@property (nonatomic) double expireTime;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
