@class NSString;

@interface CSJSafariActionModel : NSObject <CSJActionWebModel>

@property (copy, nonatomic) NSString *targetURL;
@property (copy, nonatomic) NSString *AdTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)initWithURL:(id)a0;

- (void).cxx_destruct;
- (id)initWithString:(id)a0;

@end
