@class NSURL, NSString, NSDictionary;

@interface ResponseIOS : NSObject

@property (readonly) long long statusCode;
@property (readonly, copy) NSURL *url;
@property (readonly, copy) NSString *MIMEType;
@property (readonly, copy) NSDictionary *headers;
@property BOOL ok;

- (id)init:(long long)a0 url:(id)a1 mimeType:(id)a2 headers:(id)a3;
- (void)Reject:(id)a0 error:(id)a1 delPtr:(void *)a2;
- (void)Resolve:(id)a0 body:(id)a1 delPtr:(void *)a2;
- (struct Value { struct napi_env__ *x0; struct napi_value__ *x1; })jsObjectFromResponse:(struct Env { struct napi_env__ *x0; })a0 body:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; })a1 worker:(id)a2;
- (void).cxx_destruct;

@end
