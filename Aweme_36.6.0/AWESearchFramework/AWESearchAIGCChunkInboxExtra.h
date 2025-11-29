@class NSString, NSArray;

@interface AWESearchAIGCChunkInboxExtra : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *highlightPlaceholderText;
@property (copy, nonatomic) NSString *followUpCopilotQuestion;
@property (copy, nonatomic) NSArray *followUpCopilotOptions;
@property (copy, nonatomic) NSString *searchID;
@property (nonatomic) BOOL highlightPlaceholderTextHasShown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
