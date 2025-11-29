@class NSString, TTVideoEnginePlayInfo;

@interface TTVideoEngineVideoInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *vid;
@property (nonatomic) unsigned long long resolution;
@property (nonatomic) long long expire;
@property (retain, nonatomic) TTVideoEnginePlayInfo *playInfo;

- (BOOL)hasPlayURL;
- (BOOL)isString:(id)a0 EqualToString:(id)a1;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isExpired;
- (BOOL)isEqual:(id)a0;
- (id)codecType;

@end
