@class NSArray, NSString, AWEGDPointSelectedInfo, AWEGDPointExplain, AWEGDPointComment;

@interface AWEGDPointData : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEGDPointExplain *explain;
@property (retain, nonatomic) AWEGDPointComment *comment;
@property (retain, nonatomic) AWEGDPointSelectedInfo *selected_info;
@property (retain, nonatomic) NSArray *marquee;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)marqueeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
