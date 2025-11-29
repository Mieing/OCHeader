@class NSString, NSDictionary, NSURL;

@interface BDUGLuckyResponseModel : NSObject <NSCoding>

@property (copy, nonatomic) NSString *MIMEType;
@property (nonatomic) long long statusCode;
@property (retain, nonatomic) NSDictionary *allHeaderFields;
@property (retain, nonatomic) NSURL *URL;
@property (retain, nonatomic) NSDictionary *rawDict;
@property (nonatomic) long long serviceErrNum;
@property (copy, nonatomic) NSString *serviceErrDesc;
@property (retain, nonatomic) id dataObj;
@property (retain, nonatomic) NSString *debugInfo;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
