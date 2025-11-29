@class AWEFeedPlayableIconModel, NSString;

@interface AWEFeedPlayableRewardBeforeModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEFeedPlayableIconModel *icon;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSString *unit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
