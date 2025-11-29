@class NSString;

@interface AWEAIGCAnchorInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *aigcStickerId;
@property (copy, nonatomic) NSString *originalStickerId;
@property (nonatomic) BOOL isAIGCSticker;
@property (nonatomic) long long aigcType;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *extra;
@property (readonly, nonatomic) BOOL aigcLoraType;
@property (readonly, copy, nonatomic) NSString *aigcTypeString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
