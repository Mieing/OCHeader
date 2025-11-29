@class NSString;

@interface AWEECPostShareInfoResponse : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *shareTitle;
@property (copy, nonatomic) NSString *shareContent;
@property (nonatomic) long long rankType;
@property (nonatomic) BOOL shouldPostToDOUPlus;
@property (nonatomic) BOOL shouldPostToQC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
