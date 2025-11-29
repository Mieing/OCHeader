@class NSString;

@interface IESLiveVideoGiftIcons : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *open;
@property (copy, nonatomic) NSString *close;
@property (nonatomic) long long x;
@property (nonatomic) long long y;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
