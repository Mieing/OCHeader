@class NSNumber, NSString;

@interface AWEShareBeforeShareResponseModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *st;
@property (copy, nonatomic) NSString *msg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
