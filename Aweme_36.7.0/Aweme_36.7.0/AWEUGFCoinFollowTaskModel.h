@class NSString, AWEFCoinTaskDataBubble;

@interface AWEUGFCoinFollowTaskModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL hasNext;
@property (copy, nonatomic) NSString *taskToken;
@property (copy, nonatomic) NSString *activityID;
@property (retain, nonatomic) AWEFCoinTaskDataBubble *bubble;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
