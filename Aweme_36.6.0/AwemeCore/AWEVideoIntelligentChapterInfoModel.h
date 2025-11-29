@class NSString;

@interface AWEVideoIntelligentChapterInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *detail;
@property (nonatomic) long long timeStamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
