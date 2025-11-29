@class NSString;

@interface AWEAIGCAIAssetTask : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long taskID;
@property (nonatomic) unsigned long long taskType;
@property (copy, nonatomic) NSString *coverUrl;
@property (copy, nonatomic) NSString *darkCoverUrl;
@property (copy, nonatomic) NSString *imCoverUrl;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *shareTitle;
@property (nonatomic) long long awardCount;
@property (nonatomic) BOOL done;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
