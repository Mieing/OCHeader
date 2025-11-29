@class NSString, NSDictionary;

@interface AWELivePreviewGrowthTask : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *taskKey;
@property (copy, nonatomic) NSString *mainText;
@property (copy, nonatomic) NSString *subText;
@property (copy, nonatomic) NSDictionary *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parseFromOriginRoomModel:(id)a0;

- (void).cxx_destruct;

@end
