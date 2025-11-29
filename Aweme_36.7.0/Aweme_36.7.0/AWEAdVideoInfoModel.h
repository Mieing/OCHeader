@class NSNumber, NSString;

@interface AWEAdVideoInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *height;
@property (retain, nonatomic) NSNumber *duration;
@property (copy, nonatomic) NSString *dashVideoModel;
@property (retain, nonatomic) NSNumber *groupID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
