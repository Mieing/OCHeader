@class NSDictionary;

@interface TVLTransInfo : NSObject

@property (nonatomic) long long PTS;
@property (retain, nonatomic) NSDictionary *rawData;
@property (readonly, nonatomic) long long index;
@property (readonly, nonatomic) long long checkedDTS;
@property (readonly, nonatomic) long long sentFrames;

+ (id)transInfoWithSEI:(id)a0;

- (void).cxx_destruct;
- (id)description;
- (id)initWithRawData:(id)a0;

@end
