@class NSString;

@interface IESECWinExtensionControlnfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *commonPassThrough;
@property (copy, nonatomic) NSString *nextApi;
@property (nonatomic) long long cursor;
@property (nonatomic) BOOL hasMore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
