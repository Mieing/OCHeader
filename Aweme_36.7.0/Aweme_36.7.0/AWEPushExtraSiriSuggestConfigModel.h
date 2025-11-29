@class NSString, NSDate;

@interface AWEPushExtraSiriSuggestConfigModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long frequencyControlledCount;
@property (nonatomic) BOOL eligibleForHandoff;
@property (nonatomic) BOOL eligibleForSearch;
@property (nonatomic) BOOL eligibleForPrediction;
@property (nonatomic) double expireTime;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic) long long templateID;
@property (nonatomic) BOOL donated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
