@class NSString, NSArray;

@interface IESLLGDUrlStruct : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *uri;
@property (retain, nonatomic) NSArray *url_list;
@property (nonatomic) long long height;
@property (nonatomic) long long width;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
