@class NSNumber, NSString;

@interface AWEIMNotificationGroupDataRequestModelNew : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *maxTime;
@property (retain, nonatomic) NSNumber *minTime;
@property (retain, nonatomic) NSNumber *count;
@property (retain, nonatomic) NSNumber *group;
@property (retain, nonatomic) NSNumber *isMarkRead;
@property (retain, nonatomic) NSNumber *isInteractive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)initWithGroup:(id)a0;

@end
