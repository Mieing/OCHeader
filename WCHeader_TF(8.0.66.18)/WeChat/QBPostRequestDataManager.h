@class NSMutableDictionary;

@interface QBPostRequestDataManager : NSObject

@property (retain) NSMutableDictionary *dicData;

+ (id)sharedInstance;
+ (void)setHTTPBodyElementData:(id)a0 forRequest:(id)a1;
+ (void)setHTTPBodyElementStream:(id)a0 forRequest:(id)a1;
+ (id)appendBodyForRequest:(id)a0 originURLString:(id *)a1;

- (id)init;
- (void)addPostDataElement:(id)a0 forURLString:(id)a1 mainURLString:(id)a2;
- (id)postDataElementForURLString:(id)a0;
- (void)fillElement:(id)a0 forRandomString:(long long)a1 URLString:(id)a2;
- (void)removeFirstDataForURLString:(id)a0;
- (id)arrayFromContainerWithKey:(id)a0;
- (id)arrayFromKey:(id)a0;
- (void)removeAllPostData;
- (void).cxx_destruct;

@end
