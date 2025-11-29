@class NSArray;

@interface TPStrategyConfig : NSObject

@property (nonatomic) long long decoderStrategy;
@property (retain, nonatomic) NSArray *playerTypeList;
@property (nonatomic) long long playerScene;

+ (id)configWithParams:(id)a0;

- (void).cxx_destruct;

@end
