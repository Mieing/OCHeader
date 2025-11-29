@class NSNumber, NSString;

@interface BizAlbumUrlInfo : NSObject

@property (retain, nonatomic) NSNumber *openScene;
@property (retain, nonatomic) NSNumber *subScene;
@property (copy, nonatomic) NSString *url;
@property (retain, nonatomic) NSNumber *itemShowType;

+ (id)makeWithOpenScene:(id)a0 subScene:(id)a1 url:(id)a2 itemShowType:(id)a3;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
