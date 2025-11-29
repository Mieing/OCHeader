@class AWEMinorAlbum, NSString;

@interface AWETeenAwemeStats : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long minorSubscribedStatus;
@property (retain, nonatomic) AWEMinorAlbum *minorAlbum;
@property (nonatomic) long long minorBlockStatus;
@property (nonatomic) long long minorHeadAuditStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)minorAlbumJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
