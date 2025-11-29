@class NSString;

@interface IESLiveCloudCollaborateSourceItemModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *itemId;
@property (copy, nonatomic) NSString *rtcUid;
@property (nonatomic) BOOL useVideo;
@property (nonatomic) BOOL useAudio;
@property (nonatomic) long long position;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
