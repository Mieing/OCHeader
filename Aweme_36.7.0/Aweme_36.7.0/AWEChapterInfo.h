@class NSString, NSNumber, NSArray;

@interface AWEChapterInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *descForSearch;
@property (retain, nonatomic) NSNumber *timestamp;
@property (retain, nonatomic) NSNumber *endTime;
@property (copy, nonatomic) NSString *detail;
@property (nonatomic) BOOL isFake;
@property (nonatomic) BOOL isEcomWord;
@property (copy, nonatomic) NSString *URL;
@property (copy, nonatomic) NSArray *points;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (long long)type;
- (void)setType:(long long)a0;

@end
