@class NSString;

@interface CSJImage : NSObject <NSCoding>

@property (nonatomic) BOOL imagePreview;
@property (copy, nonatomic) NSString *imageURL;
@property (copy, nonatomic) NSString *image_key;
@property (nonatomic) float width;
@property (nonatomic) float height;
@property (nonatomic) float duration;

- (void)setupDataWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryValue;
- (BOOL)isValid;
- (BOOL)isMemberOfClass:(Class)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (id)initWithDictionary:(id)a0;

@end
