@class NSArray, NSString;

@interface AWEIMNewcomerWelcomerListResponseModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long totalCount;
@property (retain, nonatomic) NSArray *participants;
@property (nonatomic) BOOL hasWelcome;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)participantsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
