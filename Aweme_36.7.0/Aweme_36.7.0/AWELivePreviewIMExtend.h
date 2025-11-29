@class NSString, AWEURLModel;

@interface AWELivePreviewIMExtend : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long imExtendType;
@property (retain, nonatomic) AWEURLModel *icon;
@property (copy, nonatomic) NSString *mainTitle;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconJSONTransformer;
+ (id)parseFromOriginRoomModel:(id)a0;

- (void).cxx_destruct;

@end
