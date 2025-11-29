@class NSString;

@interface AWEDTOImportAICutData : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *videoId;
@property (copy, nonatomic) NSString *aiCutId;
@property (nonatomic) long long videoCount;
@property (copy, nonatomic) NSString *videoSrcLenList;
@property (copy, nonatomic) NSString *videoCutLenList;
@property (copy, nonatomic) NSString *videoCutStartTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
