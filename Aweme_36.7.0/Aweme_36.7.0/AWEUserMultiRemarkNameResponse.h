@class NSArray;

@interface AWEUserMultiRemarkNameResponse : AWEBaseApiModel

@property (retain, nonatomic) NSArray *failUIDs;
@property (retain, nonatomic) NSArray *bizFailUIDs;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
