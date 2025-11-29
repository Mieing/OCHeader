@class NSMutableDictionary;

@interface AWEVideoURLTransformer : NSObject

@property (retain, nonatomic) NSMutableDictionary *urlMap;

+ (id)customURLForOriginURL:(id)a0;
+ (id)originURLForCustomURL:(id)a0;
+ (id)sharedInstance;

- (id)_customURLForOriginURL:(id)a0;
- (id)_originURLForCustomURL:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
