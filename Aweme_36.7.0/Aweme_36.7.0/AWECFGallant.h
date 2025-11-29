@class NSURL, NSString;

@interface AWECFGallant : NSObject

@property (retain, nonatomic) NSURL *nsurl;
@property (readonly, copy) NSString *scheme;
@property (readonly, copy) NSString *product;
@property (readonly, copy) NSString *business;
@property (readonly, copy) NSString *action;
@property (readonly, copy) NSString *parameters;

+ (id)DYCURLWithNSURL:(id)a0;
+ (id)startDYCURL;
+ (id)closeDYCURL;
+ (id)fetchDYCURL;
+ (id)DYCURLWithProduct:(id)a0 business:(id)a1 action:(id)a2 parameters:(id)a3;
+ (id)scheme;
+ (BOOL)canHandleURL:(id)a0;

- (BOOL)canHandle;
- (BOOL)isStartScheme;
- (BOOL)isCloseScheme;
- (BOOL)isFetchScheme;
- (id)toNSURL;
- (id)initWithScheme:(id)a0 product:(id)a1 business:(id)a2 action:(id)a3 parameters:(id)a4;
- (id)initWithProduct:(id)a0 business:(id)a1 action:(id)a2 parameters:(id)a3;
- (void).cxx_destruct;
- (id)initWithNSURL:(id)a0;

@end
