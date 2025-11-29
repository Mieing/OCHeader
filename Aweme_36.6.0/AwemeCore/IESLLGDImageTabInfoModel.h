@class NSString;

@interface IESLLGDImageTabInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *tabKey;
@property (retain, nonatomic) NSString *tabName;
@property (nonatomic) long long startIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
