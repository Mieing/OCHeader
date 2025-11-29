@class NSString, NSNumber;

@interface AWEAdFeedCommentsAdInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSNumber *positiveRate;
@property (copy, nonatomic) NSNumber *negativeRate;
@property (copy, nonatomic) NSString *avatar;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSNumber *adID;
@property (copy, nonatomic) NSNumber *creativeID;
@property (copy, nonatomic) NSString *logExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
