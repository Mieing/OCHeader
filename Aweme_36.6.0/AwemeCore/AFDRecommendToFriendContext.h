@class NSNumber, AWEAwemeModel;

@interface AFDRecommendToFriendContext : NSObject

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) id /* block */ mockExtraBlock;
@property (copy, nonatomic) id /* block */ failedExtraBlock;
@property (copy, nonatomic) id /* block */ successBlock;
@property (nonatomic) unsigned long long sourceType;
@property (nonatomic) unsigned long long privacyType;
@property (nonatomic) unsigned long long sourceVideoType;
@property (retain, nonatomic) NSNumber *isRecommendFromDetailCell;

+ (id)recommendEnterMethodFromSource:(unsigned long long)a0;

- (id)initWithAwemeModel:(id)a0;
- (id)recommendEnterMethod;
- (void).cxx_destruct;

@end
