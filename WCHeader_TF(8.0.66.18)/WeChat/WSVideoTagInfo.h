@class NSString;

@interface WSVideoTagInfo : NSObject <NSCopying>

@property (retain, nonatomic) NSString *tagId;
@property (retain, nonatomic) NSString *tagWording;
@property (nonatomic) unsigned int actionType;
@property (nonatomic) unsigned int category;
@property (retain, nonatomic) NSString *nsUrl;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subTitle;
@property (retain, nonatomic) NSString *prefixIconUrl;

+ (id)FromDictionary:(id)a0;
+ (id)ArrayFromJSON:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)generateDictionary;
- (void).cxx_destruct;

@end
