@class NSString, NSArray;

@interface TencentApiReq : NSObject <NSSecureCoding>

@property (readonly, nonatomic) long long nMessageType;
@property (readonly, nonatomic) long long nPlatform;
@property (readonly, nonatomic) long long nSdkVersion;
@property (readonly, nonatomic) long long nSeq;
@property (retain, nonatomic) NSString *sAppID;
@property (retain, nonatomic) NSArray *arrMessage;
@property (retain, nonatomic) NSString *sDescription;

+ (id)reqFromSeq:(long long)a0 type:(int)a1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithData:(long long)a0 type:(int)a1;

@end
