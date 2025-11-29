@interface AWEShareShortURLUtil : NSObject

+ (void)shortURLWithFunction:(id)a0 completion:(id /* block */)a1;
+ (BOOL)shouldShortenURLWithFunction:(id)a0;
+ (void)updateContextWithShortURL:(id)a0 function:(id)a1 compeletion:(id /* block */)a2;
+ (void)trackLinkCheckWithFunction:(id)a0 result:(BOOL)a1;
+ (BOOL)isOverseaCopyWithFunction:(id)a0;
+ (BOOL)shouldFormatLinkStringWithFunction:(id)a0;

@end
