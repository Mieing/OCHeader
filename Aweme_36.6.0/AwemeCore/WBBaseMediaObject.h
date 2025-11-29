@class NSString, NSData;

@interface WBBaseMediaObject : NSObject

@property (retain, nonatomic) NSString *objectID;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *description;
@property (retain, nonatomic) NSData *thumbnailData;
@property (retain, nonatomic) NSString *scheme;

+ (id)dictionaryWithMediaObject:(id)a0;
+ (id)mappedMediaObjectWithDictionary:(id)a0;
+ (id)object;
+ (void)nothing;

- (void)storeToDictionary:(id)a0;
- (void).cxx_destruct;
- (id)validate;
- (void)loadFromDictionary:(id)a0;

@end
