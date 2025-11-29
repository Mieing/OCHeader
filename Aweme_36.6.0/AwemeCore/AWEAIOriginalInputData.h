@class NSString, NSDictionary, AWEAwemeModel;

@interface AWEAIOriginalInputData : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (nonatomic) BOOL isFromDC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
