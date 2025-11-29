@class NSString, NSNumber;

@interface AWESearchAnchorUIInfoIconModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *iconURL;
@property (retain, nonatomic) NSNumber *height;
@property (retain, nonatomic) NSNumber *width;
@property (nonatomic) long long iconType;
@property (nonatomic) BOOL notShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
