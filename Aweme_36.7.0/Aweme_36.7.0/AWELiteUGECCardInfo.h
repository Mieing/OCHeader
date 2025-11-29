@class NSString, AWELiteUGECCardTextDetail;

@interface AWELiteUGECCardInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *awemeID;
@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) NSString *buriedPoint;
@property (nonatomic) BOOL isShow;
@property (nonatomic) long long afterMillisecond;
@property (retain, nonatomic) AWELiteUGECCardTextDetail *cardTextDetail;
@property (nonatomic) long long anchorPlan;
@property (nonatomic) long long anchorStyle;
@property (nonatomic) BOOL anchorColorWhite;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
