@class NSString, NSNumber;

@interface AWEHangoutOperationCardModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *lightBgImageUrl;
@property (copy, nonatomic) NSString *darkBgImageUrl;
@property (nonatomic) double cardRatio;
@property (copy, nonatomic) NSString *cardID;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSNumber *index;
@property (retain, nonatomic) NSNumber *startTime;
@property (retain, nonatomic) NSNumber *endTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
