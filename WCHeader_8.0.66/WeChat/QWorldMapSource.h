@class NSString, NSArray, NSDictionary;

@interface QWorldMapSource : NSObject {
    NSDictionary *_originData;
}

@property int scenetype;
@property (copy, nonatomic) NSString *style;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *url;
@property (retain, nonatomic) NSArray *range;

- (id)initWithDict:(id)a0;
- (id)originalTileSrc;
- (void).cxx_destruct;

@end
