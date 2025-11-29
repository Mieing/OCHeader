@class NSData, NSArray;

@interface QQApiCommonContentObject : QQApiObject

@property (nonatomic) unsigned int layoutType;
@property (copy, nonatomic) NSData *previewImageData;
@property (copy, nonatomic) NSArray *textArray;
@property (copy, nonatomic) NSArray *pictureDataArray;

+ (id)objectWithDictionary:(id)a0;
+ (id)objectWithLayoutType:(int)a0 textArray:(id)a1 pictureArray:(id)a2 previewImageData:(id)a3;

- (void).cxx_destruct;
- (id)toDictionary;

@end
