@class NSString;

@interface IESECGoodsFeedImmersiveCursorModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *cursor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
