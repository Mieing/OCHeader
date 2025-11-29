@class NSArray, NSNumber;

@interface BizImageSelectInfo : NSObject

@property (copy, nonatomic) NSArray *imgList;
@property (retain, nonatomic) NSNumber *ratioW;
@property (retain, nonatomic) NSNumber *ratioH;
@property (retain, nonatomic) NSNumber *picFromScene;

+ (id)makeWithImgList:(id)a0 ratioW:(id)a1 ratioH:(id)a2 picFromScene:(id)a3;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
