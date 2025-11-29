@class NSString, AWEECJumpTabInfo;

@interface AWEECJumpTabInfoResponse : MTLModel <MTLJSONSerializing, NSCopying>

@property (retain, nonatomic) AWEECJumpTabInfo *jumpTabInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
