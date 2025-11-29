@class NSString, AWEURLModel;

@interface AWEECommerceBubbleModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long bubbleId;
@property (retain, nonatomic) AWEURLModel *iconUrl;
@property (copy, nonatomic) NSString *bubbleTitle;
@property (copy, nonatomic) NSString *schemaUrlString;
@property (nonatomic) double delayDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
