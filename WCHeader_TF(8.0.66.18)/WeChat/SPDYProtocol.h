@interface SPDYProtocol : NSObject

+ (id)jsEscapeString:(id)a0 isJsEscapeString:(BOOL *)a1;
+ (id)urlWithAbsoultURLString:(id)a0;
+ (id)urlWithString:(id)a0 withOriginURL:(id)a1;
+ (BOOL)isUniqueHeaderName:(id)a0;

@end
