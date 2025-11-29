@class NSString, AWEGDUrlStruct;

@interface AWEGDUserBasicInfo : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEGDUrlStruct *avatar_thumb;
@property (retain, nonatomic) AWEGDUrlStruct *avatar_larger;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *sec_uid;
@property (copy, nonatomic) NSString *uid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)avatar_thumbJSONTransformer;
+ (id)avatar_largerJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
