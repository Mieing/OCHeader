@class NSString, NSDictionary;

@interface WeChat.GCEntry : NSObject {
    void /* unknown type, empty encoding */ urlStr;
    void /* unknown type, empty encoding */ MIMEType;
    void /* unknown type, empty encoding */ textEncodingName;
    void /* unknown type, empty encoding */ dataStr;
    void /* unknown type, empty encoding */ headerFileds;
}

@property (nonatomic, copy) NSString *urlStr;
@property (nonatomic, copy) NSString *MIMEType;
@property (nonatomic) void /* unknown type, empty encoding */ expectedContentLength;
@property (nonatomic) void /* unknown type, empty encoding */ statusCode;
@property (nonatomic, copy) NSString *textEncodingName;
@property (nonatomic, copy) NSString *dataStr;
@property (nonatomic, copy) NSDictionary *headerFileds;

- (id)init;
- (void).cxx_destruct;

@end
