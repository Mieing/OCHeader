@class NSArray, NSString;

@interface AWEAnchorTrackModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *trackShowInfo;
@property (copy, nonatomic) NSArray *trackClickInfo;
@property (copy, nonatomic) NSString *btm;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)trackClickInfoJSONTransformer;
+ (id)trackShowInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
