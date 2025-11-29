@class NSString;

@interface WBWeiyouObject : NSObject

@property (retain, nonatomic) NSString *object_id;
@property (retain, nonatomic) NSString *short_url;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *imageURL;
@property (retain, nonatomic) NSString *summary;

+ (id)weiYouObjectWithDictionary:(id)a0;
+ (id)dictionaryWithVideoObject:(id)a0;
+ (id)object;

- (void).cxx_destruct;
- (id)validate;

@end
