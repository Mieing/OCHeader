@class NSString, NSSet;

@interface AWEMRRecordJournalRow : NSObject <NSCoding, AWEMRRecordJournalRow>

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *componentID;
@property (copy, nonatomic) NSString *componentType;
@property (nonatomic) double timeOfShow;
@property (nonatomic) double timeOfHide;
@property (nonatomic) BOOL consume;
@property (copy, nonatomic) NSSet *locs;
@property (copy, nonatomic) NSSet *tags;
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
