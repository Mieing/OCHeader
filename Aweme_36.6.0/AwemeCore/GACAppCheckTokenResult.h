@class GACAppCheckToken, NSError;

@interface GACAppCheckTokenResult : NSObject

@property (readonly, nonatomic) GACAppCheckToken *token;
@property (readonly, nonatomic) NSError *error;

+ (id)placeholderToken;

- (void).cxx_destruct;
- (id)initWithError:(id)a0;
- (id)initWithToken:(id)a0;
- (id)initWithToken:(id)a0 error:(id)a1;

@end
