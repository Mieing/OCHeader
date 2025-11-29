@class NSString, AWEAwemeModel;

@interface AWEAdWebviewInfo : NSObject

@property (nonatomic) BOOL isSimilarEntry;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *refer;
@property (nonatomic) BOOL shouldLoadSimilarRecommendAd;

- (id)initWithAwemeModel:(id)a0 refer:(id)a1 isSimilarEntry:(BOOL)a2;
- (void).cxx_destruct;

@end
