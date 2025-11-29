@class NSString;

@interface AWEFeedPadListViewChannelBubbleInfoModel : MTLModel <MTLJSONSerializing>

@property (readonly, nonatomic) long long startTime;
@property (readonly, nonatomic) long long endTime;
@property (readonly, copy, nonatomic) NSString *bubbleText;
@property (readonly, nonatomic) long long version;
@property (readonly, nonatomic) long long showTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;
- (BOOL)isValidWithError:(id *)a0;

@end
