@class NSString, NSMutableArray;

@interface AWEStudioFeedbackRecorderParserItem : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long count;
@property (nonatomic) long long successCount;
@property (nonatomic) long long cancelCount;
@property (retain, nonatomic) NSMutableArray *failInfoArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
