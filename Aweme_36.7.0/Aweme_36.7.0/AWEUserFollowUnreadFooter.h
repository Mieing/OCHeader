@class NSString;

@interface AWEUserFollowUnreadFooter : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long showEntrance;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long jumpType;
@property (nonatomic) long long duration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
