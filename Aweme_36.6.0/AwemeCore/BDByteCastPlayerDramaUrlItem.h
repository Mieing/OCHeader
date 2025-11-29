@class NSString, NSArray, NSDictionary;

@interface BDByteCastPlayerDramaUrlItem : NSObject

@property (copy, nonatomic) NSString *urlType;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSArray *urlArray;
@property (copy, nonatomic) NSString *dramaId;
@property (nonatomic) int width;
@property (nonatomic) int height;
@property (copy, nonatomic) NSString *category;
@property (copy, nonatomic) NSArray *categoryArray;
@property (nonatomic) long long bitrate;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) BOOL isDefault;
@property (readonly, copy, nonatomic) NSDictionary *dictionary;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;

@end
