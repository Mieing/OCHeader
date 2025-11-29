@class NSArray, NSDictionary;

@interface BDPoiResponse : NSObject <NSCopying>

@property (nonatomic) long long total;
@property (nonatomic) long long length;
@property (nonatomic) long long page;
@property (nonatomic) long long size;
@property (copy, nonatomic) NSArray *poiList;
@property (copy, nonatomic) NSDictionary *poiInfos;

+ (id)responeWithDictionary:(id)a0;

- (void).cxx_destruct;

@end
