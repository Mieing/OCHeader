@class NSString, NSNumber;

@interface AWEHangoutJumpSatisfactionCardModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *cardID;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *lightBgImageUrl;
@property (copy, nonatomic) NSString *darkBgImageUrl;
@property (copy, nonatomic) NSString *projectID;
@property (copy, nonatomic) NSString *parentID;
@property (copy, nonatomic) NSString *taskID;
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
