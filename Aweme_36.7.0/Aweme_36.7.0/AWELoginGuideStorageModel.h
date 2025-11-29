@class NSArray, NSString, NSDate;

@interface AWELoginGuideStorageModel : AWEBaseApiModel <NSCoding, MTLJSONSerializing>

@property (nonatomic) long long methodType;
@property (nonatomic) long long sceneType;
@property (nonatomic) long long period;
@property (nonatomic) long long periodInterval;
@property (nonatomic) long long periodShowCount;
@property (nonatomic) long long totalShowCount;
@property (nonatomic) long long maxShowCount;
@property (retain, nonatomic) NSArray *showDateList;
@property (retain, nonatomic) NSDate *lastSkipDate;
@property (retain, nonatomic) NSDate *lastFailDate;
@property (nonatomic) long long skipCount;
@property (nonatomic) long long failCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
