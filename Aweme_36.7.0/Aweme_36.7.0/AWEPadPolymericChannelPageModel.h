@class NSArray, NSString, NSNumber;

@interface AWEPadPolymericChannelPageModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *sectionList;
@property (nonatomic) long long offset;
@property (nonatomic) long long requestType;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *pageKey;
@property (retain, nonatomic) NSNumber *enableLight;
@property (retain, nonatomic) NSNumber *enableGrid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
