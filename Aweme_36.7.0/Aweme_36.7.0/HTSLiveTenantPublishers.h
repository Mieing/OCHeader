@class NSString, NSMutableArray;

@interface HTSLiveTenantPublishers : GPBMessage

@property (retain, nonatomic) NSMutableArray *publisherInfoListArray;
@property (readonly, nonatomic) unsigned long long publisherInfoListArray_Count;
@property (copy, nonatomic) NSString *triggerReason;
@property (copy, nonatomic) NSString *fromPage;
@property (copy, nonatomic) NSString *toPage;
@property (nonatomic) long long updateTimeMs;

+ (id)descriptor;

- (id)publisherInfoListArray;
- (void)setFromPage:(id)a0;
- (void)setToPage:(id)a0;
- (void)setUpdateTimeMs:(long long)a0;
- (void)setTriggerReason:(id)a0;
- (void)setPublisherInfoListArray:(id)a0;

@end
