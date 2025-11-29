@class NSString;

@interface AWEMRRecordComponentRow : NSObject <NSCoding, AWEMRRecordComponentRow>

@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *componentID;
@property (nonatomic) double timeOfFirstShow;
@property (nonatomic) double timeOfLastShow;
@property (nonatomic) long long showCount;
@property (nonatomic) long long consumeCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)jsonStringPrettyEncoded;
- (id)formatedStringWithTimeInterval:(double)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
