@class NSString;

@interface AWEInnerPushDidReverseExpWhiteList : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *group;
@property (retain, nonatomic) NSString *type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
