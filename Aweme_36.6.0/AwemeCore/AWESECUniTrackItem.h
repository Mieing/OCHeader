@class NSString, NSDictionary;

@interface AWESECUniTrackItem : AWESECTrackItem <NSCoding>

@property (copy, nonatomic) NSString *eventType;
@property (copy, nonatomic) NSDictionary *eventParams;
@property (nonatomic) unsigned long long sampleRate;

- (unsigned long long)trackerType;
- (id)uniParams;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)eventName;
- (id)allParams;

@end
